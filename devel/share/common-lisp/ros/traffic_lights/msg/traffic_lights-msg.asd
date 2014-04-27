
(cl:in-package :asdf)

(defsystem "traffic_lights-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Light" :depends-on ("_package_Light"))
    (:file "_package_Light" :depends-on ("_package"))
  ))