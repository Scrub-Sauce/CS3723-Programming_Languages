(DEFMACRO setNIL (x)
    (LIST `SETF x NIL)
)

(SETF a NIL)
(SETF b 23)
(SETF b NIL)

