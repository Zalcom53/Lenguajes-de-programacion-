(value-of exp1 p sigma0) = (val1,sigma1)

(value-of (begin-exp exp1 '()) p sigma0) = (val1, sigma1)

(value-of (begin-exp exp1 (cons exp2 exps)) p sigma0) = (value-of (begin-exp exp2 exps) p sigma1)s