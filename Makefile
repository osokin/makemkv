# New ports collection makefile for:	makemkv
# Date created:				05 Mar 2012
# Whom:					osa
#
# $FreeBSD$
#

PORTNAME=	makemkv
PORTVERSION=	1.7.2
CATEGORIES=	multimedia
DISTNAME=	${PORTNAME}_v${PORTVERSION}_oss${EXTRACT_SUFFIX}

MAKEFILE=	makefile.linux
USE_GMAKE=	yes
USE_LDCONFIG=	yes
USE_QT_VER=	4
QT_COMPONENTS=	qmake gui svg webkit xml moc uic rcc imageformats

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/out/${PORTNAME} ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/out/${PORTNAME}.full ${PREFIX}/bin
.for i in libdriveio.so.0 libmakemkv.so.1
	${INSTALL_PROGRAM} ${WRKSRC}/out/${i} ${PREFIX}/lib
	${INSTALL_PROGRAM} ${WRKSRC}/out/${i}.full ${PREFIX}/lib
.endfor

.include <bsd.port.mk>
