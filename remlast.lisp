(defun REMLAST (L)
    (cond ( (NULL L) NIL )
          ( (NULL (CDR L)) NIL )
          ( T (CONS (CAR L) (REMLAST (CDR L))))
    )
)

(REMLAST `(X Y Z))
