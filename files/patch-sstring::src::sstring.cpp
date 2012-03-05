--- ./sstring/src/sstring.cpp.orig	2012-03-05 15:32:10.000000000 +0400
+++ ./sstring/src/sstring.cpp	2012-03-05 15:32:34.000000000 +0400
@@ -13,7 +13,7 @@
 
 #ifndef ALREADY_HAVE_SSTRING_API
 
-#if defined(__GLIBC__) || defined(_darwin_)
+#if defined(__GLIBC__) || defined(_darwin_) || defined(__FreeBSD__)
 #define _vsnprintf vsnprintf
 #define _vsnwprintf vswprintf
 #endif
