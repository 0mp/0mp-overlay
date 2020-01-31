# $FreeBSD$

PORTNAME=	pspemu
DISTVERSION=	g20200123
CATEGORIES=	emulators

MAINTAINER=	0mp@FreeBSD.org
COMMENT=	PSP emulator

# XXX: Submodules have different licenses.
LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/lib/libunicorn.a:emulators/pspemu-unicorn

USES=		cmake pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	PSPReverse
GH_PROJECT=	PSPEmu
GH_TAGNAME=	eebe32cdc927c5fa91275658fb0157fb6b33f3ec
GH_TUPLE=	\
		aquynh:capstone:fc23632:capstone/capstone \
		PSPReverse:psp-includes:2bea39c892ee1:pspincludes/psp-includes \
		AlexanderEichner:libgdbstub:658145a7a67d:libgdbstub/libgdbstub

CMAKE_ARGS=	-DUNICORN_LIBRARIES:STRING=${LOCALBASE}/lib/libunicorn.a

.include <bsd.port.mk>
