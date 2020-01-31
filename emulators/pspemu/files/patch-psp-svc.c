--- psp-svc.c.orig	2020-01-31 09:29:22 UTC
+++ psp-svc.c
@@ -32,7 +32,6 @@
 
 #include <psp-svc.h>
 #include <psp-core.h>
-#include <libpspproxy.h>
 
 /** Pointer to the emulated supervirsor firmware state. */
 typedef struct PSPSVCINT *PPSPSVCINT;
