(DEFUN totalall (L)
    (COND ((NULL L) 0)
          ((numberp L) L)
          ((ATOM L) 0)
          (T (+ (totalall (CAR L)) (totalall (CDR L))))
    )
)

(totalall `((1 2) () ((5 10) 15)))
