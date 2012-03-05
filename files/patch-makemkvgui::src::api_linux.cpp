--- ./makemkvgui/src/api_linux.cpp.orig	2012-03-05 15:33:44.000000000 +0400
+++ ./makemkvgui/src/api_linux.cpp	2012-03-05 15:59:18.000000000 +0400
@@ -37,6 +37,7 @@
     posix_spawnattr_t           spawn_attr;
     pid_t   pid;
     int     err;
+    char **environ;
 
     if (posix_spawnattr_init(&spawn_attr))
     {
