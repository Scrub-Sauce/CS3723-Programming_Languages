(defun reptop (match rep L)
    (cond ((NULL L) NIL)
          ((EQL match (CAR L)) (CONS rep (reptop match rep (CDR L))))
          (T (CONS (CAR L) (reptop match rep (CDR L))))
    )
)

(reptop 'i 'o '(m i s s i s s i p p i))
(reptop 'i 'o '(m i s s (i s s) i p p i))
