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

MAINTAINER=	osa@FreeBSD.org
COMMENT=	Make MKV from Blu-ray and DVD

MAKEFILE=	makefile.linux
USE_GMAKE=	yes
USE_OPENSSL=	yes
USE_LDCONFIG=	yes
USE_QT_VER=	4
QT_COMPONENTS=	qmake gui svg webkit xml moc uic rcc imageformats

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/out/${PORTNAME} ${PREFIX}/bin
.for i in libdriveio.so.0 libmakemkv.so.1
	${INSTALL_PROGRAM} ${WRKSRC}/out/${i} ${PREFIX}/lib
.endfor
	@ cd ${PREFIX}/lib ; \
	${LN} -sf libdriveio.so.0 libdriveio.so ; \
	${LN} -sf libmakemkv.so.1 libmakemkv.so

.include <bsd.port.mk>
