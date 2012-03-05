--- ./makemkvgui/src/logic_posix.cpp.orig	2012-03-05 16:09:40.000000000 +0400
+++ ./makemkvgui/src/logic_posix.cpp	2012-03-05 16:15:58.000000000 +0400
@@ -18,7 +18,7 @@
 
 #if defined(_linux_)
 #include <sys/vfs.h>
-#elif defined(_darwin_)
+#elif defined(_darwin_) || defined(__FreeBSD__)
 #include <sys/param.h>
 #include <sys/mount.h>
 #endif
