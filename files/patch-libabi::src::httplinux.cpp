--- libabi/src/httplinux.cpp.orig	2012-02-09 11:43:08.000000000 +0400
+++ libabi/src/httplinux.cpp	2012-03-05 19:01:35.000000000 +0400
@@ -20,7 +20,11 @@
 */
 #include <stdint.h>
 #include <unistd.h>
+#if !defined(__FreeBSD__)
 #include <alloca.h>
+#else
+#include <stdlib.h>
+#endif
 #include <errno.h>
 #include <lgpl/httpabi.h>
 #include <lgpl/sstring.h>
