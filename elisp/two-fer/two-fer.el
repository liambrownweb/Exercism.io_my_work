;;; two-fer.el --- Two-fer Exercise (exercism)

(defun two-fer (&optional name)
  (if (or
	   (eq name "")
	   (eq name nil))
	  (setq name "you"))
  (concat "One for " name ", one for me."))

(provide 'two-fer)
;;; two-fer.el ends here
