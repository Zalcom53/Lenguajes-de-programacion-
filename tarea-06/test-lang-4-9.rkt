#lang racket/base

(require rackunit)
(require "../tarea-06/lang-4.9.rkt")

(initialize-store!)

(check-eq? (deref (newref 8)) 8)

(let ([ref1 (newref 10)]
      [ref2 (newref 15)]
      [ref3 (newref 20)])
  (check-eq? (deref ref1) 10)
  (check-eq? (deref ref2) 15)
  (check-eq? (deref ref3) 20)
  (setref! ref2 30) 
  (check-eq? (deref ref1) 10)
  (check-eq? (deref ref2) 30)
  (check-eq? (deref ref3) 20))