(DEFUN totaltop (L)
    (cond ((NULL L) 0)
          (T (+ (CAR L) (totaltop (CDR L))))
    )
)

(totaltop '(5 10 15))
