(DEFUN removeNILMost (L)
    (COND ((NULL L) NIL)
          ((ATOM L) L)
          ((NULL (CAR L)) (removeNILMost (CDR L)))
          (T (CONS (removeNILMost (CAR L)) (removeNILMost (CDR L))))
    )
)

(removeNILMost '(NIL X NIL NIL Y  NIL Z))
(removeNILMost '(X NIL (Y NIL Z) NIL))
(removeNILMost '(NIL (NIL) (X NIL Y) (NIL NIL) Z))
(removeNILMost '(NIL ( (((((NIL) NIL)))))))
