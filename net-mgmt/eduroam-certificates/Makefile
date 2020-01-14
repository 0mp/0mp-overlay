PORTNAME=	eduroam-certificates
DISTVERSION=	2020.01.14
CATEGORIES=	net-mgmt
MASTER_SITES=	https://www.campusmanagement.tu-berlin.de/fileadmin/a40000000/tubIT/KD/software/
DISTNAME=	chain
EXTRACT_SUFX=	.txt
EXTRACT_ONLY=	# none

MAINTAINER=	0mp@FreeBSD.org
COMMENT=	Eduroam certificates published by TU Berlin

LICENSE=	PD

NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

ETCDIR=		${PREFIX}/etc/ssl/certs

PLIST_FILES=	${ETCDIR}/eduroam.pem

post-extract:
	${CP} ${DISTDIR}/${DISTFILES} ${WRKSRC}

do-install:
	@${MKDIR} ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${WRKSRC}/chain.txt ${STAGEDIR}${ETCDIR}/eduroam.pem

.include <bsd.port.mk>
