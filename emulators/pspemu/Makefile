PORTNAME=	pspemu
DISTVERSION=	g20200123
CATEGORIES=	emulators

MAINTAINER=	0mp@FreeBSD.org
COMMENT=	PSP emulator

LICENSE=	GPLv3 MIT
LICENSE_COMB=	multi
LICENSE_FILE_GPLv3=	${WRKSRC}/LICENSE
LICENSE_FILE_MIT=	${WRKSRC}/psp-includes/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/lib/libcapstone.a:devel/capstone4 \
		${LOCALBASE}/lib/libgdbstub.a:emulators/pspemu-libgdbstub \
		${LOCALBASE}/lib/libpspproxy.a:emulators/pspemu-libpspproxy \
		${LOCALBASE}/lib/libunicorn.a:emulators/pspemu-unicorn

USES=		cmake localbase pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	PSPReverse
GH_PROJECT=	PSPEmu
GH_TAGNAME=	eebe32cd
GH_TUPLE=	PSPReverse:psp-includes:2bea39c892ee1:pspincludes/psp-includes

CMAKE_ARGS=	-DCAPSTONE_LIBRARIES:STRING=${LOCALBASE}/lib/libcapstone.a \
		-DGDBSTUB_LIBRARIES:STRING=${LOCALBASE}/lib/libgdbstub.a \
		-DUNICORN_LIBRARIES:STRING=${LOCALBASE}/lib/libunicorn.a

PLIST_FILES=	bin/PSPEmu

do-install:
	${INSTALL_PROGRAM} ${INSTALL_WRKSRC}/PSPEmu ${STAGEDIR}/${PREFIX}/bin

.include <bsd.port.mk>
