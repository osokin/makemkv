--- ./libabi/src/httplinux.cpp.orig	2012-03-05 15:30:33.000000000 +0400
+++ ./libabi/src/httplinux.cpp	2012-03-05 15:30:48.000000000 +0400
@@ -19,8 +19,8 @@
 
 */
 #include <stdint.h>
+#include <stdlib.h>
 #include <unistd.h>
-#include <alloca.h>
 #include <errno.h>
 #include <lgpl/httpabi.h>
 #include <lgpl/sstring.h>
