(defun gdb-setup (path)
  (interactive
   (list
    (read-file-name "Binary to debug: ")))
  (print path)
  (make-frame)
  (let ((gdb-many-windows nil))
    (gdb (concat "gdb -i=mi " path)))
  (split-window-right)
  (gdb-display-registers-buffer)
  (split-window-below)
  (gdb-display-disassembly-buffer)
  (set-window-dedicated-p nil nil)
  (other-window 1)
  (set-window-dedicated-p nil nil)
  (other-window 1)
  (split-window-below)
  (other-window 1)
  (let ((binary-name
	 (car (last
	       (split-string path "/")))))
    (switch-to-buffer (concat "*input/output of " binary-name "*"))
    (other-window 1)))
