(defun memall (atm L)
    (cond ((NULL L) NIL)
          ((LISTP (CAR L)) 
            (OR (MEMALL atm (CAR L))(MEMALL atm (CDR L)))
          )
          ((EQL atm (CAR L)) T)
          (T (MEMALL atm (CDR L)))
    )
)

(MEMALL `A `(B A R T))  
(MEMALL `X `(B A R T))  
(MEMALL `A `(B (A R) T))  
(MEMALL `X `(B (A R) T))  

