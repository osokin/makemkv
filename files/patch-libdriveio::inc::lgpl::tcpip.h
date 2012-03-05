--- ./libdriveio/inc/lgpl/tcpip.h.orig	2012-03-05 15:27:41.000000000 +0400
+++ ./libdriveio/inc/lgpl/tcpip.h	2012-03-05 15:27:57.000000000 +0400
@@ -87,7 +87,7 @@
 
 #endif // WIN32
 
-#if defined(__linux__) || defined (_darwin_)
+#if defined(__linux__) || defined (_darwin_) || defined(__FreeBSD__)
 
 #include <sys/socket.h>
 #include <netdb.h>
