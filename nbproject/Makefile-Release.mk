#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Atapecio.o \
	${OBJECTDIR}/Año.o \
	${OBJECTDIR}/Cilindro-A-V.o \
	${OBJECTDIR}/CuadroAstericos.o \
	${OBJECTDIR}/Ej-2.o \
	${OBJECTDIR}/M-Km.o \
	${OBJECTDIR}/NumeroPosNegCer.o \
	${OBJECTDIR}/OperacionBasica.o \
	${OBJECTDIR}/ParImp.o \
	${OBJECTDIR}/Promedio5n.o \
	${OBJECTDIR}/Promedio_edad.o \
	${OBJECTDIR}/Segundos.o \
	${OBJECTDIR}/Temperaturas.o \
	${OBJECTDIR}/Ventas.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/tipo_dato.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cursoprogramacion.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cursoprogramacion.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cursoprogramacion ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Atapecio.o: Atapecio.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Atapecio.o Atapecio.c

${OBJECTDIR}/Año.o: Año.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Año.o Año.c

${OBJECTDIR}/Cilindro-A-V.o: Cilindro-A-V.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Cilindro-A-V.o Cilindro-A-V.c

${OBJECTDIR}/CuadroAstericos.o: CuadroAstericos.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CuadroAstericos.o CuadroAstericos.c

${OBJECTDIR}/Ej-2.o: Ej-2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ej-2.o Ej-2.c

${OBJECTDIR}/M-Km.o: M-Km.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/M-Km.o M-Km.c

${OBJECTDIR}/NumeroPosNegCer.o: NumeroPosNegCer.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/NumeroPosNegCer.o NumeroPosNegCer.c

${OBJECTDIR}/OperacionBasica.o: OperacionBasica.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/OperacionBasica.o OperacionBasica.c

${OBJECTDIR}/ParImp.o: ParImp.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ParImp.o ParImp.c

${OBJECTDIR}/Promedio5n.o: Promedio5n.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Promedio5n.o Promedio5n.c

${OBJECTDIR}/Promedio_edad.o: Promedio_edad.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Promedio_edad.o Promedio_edad.c

${OBJECTDIR}/Segundos.o: Segundos.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Segundos.o Segundos.c

${OBJECTDIR}/Temperaturas.o: Temperaturas.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Temperaturas.o Temperaturas.c

${OBJECTDIR}/Ventas.o: Ventas.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ventas.o Ventas.c

${OBJECTDIR}/main.o: main.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

${OBJECTDIR}/tipo_dato.o: tipo_dato.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tipo_dato.o tipo_dato.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
