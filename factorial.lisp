(DEFUN FACTORIAL (N)
    (COND ((ZEROP N) 1)
          (T (* N (FACTORIAL (- N 1))))
    )
)

(FACTORIAL 52)
(FACTORIAL 5)
