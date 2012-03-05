--- makemkvgui/src/api_linux.cpp.orig	2012-02-09 11:43:08.000000000 +0400
+++ makemkvgui/src/api_linux.cpp	2012-03-05 19:09:13.000000000 +0400
@@ -37,6 +37,9 @@
     posix_spawnattr_t           spawn_attr;
     pid_t   pid;
     int     err;
+#if defined(__FreeBSD__)
+    char **environ;
+#endif
 
     if (posix_spawnattr_init(&spawn_attr))
     {
