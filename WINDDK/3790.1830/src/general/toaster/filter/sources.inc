TARGETTYPE=DRIVER

!IFNDEF BUILD_ALT_DIR
SAMPLE_COMMON_DIR=..\..\disk
!ELSE
SAMPLE_COMMON_DIR=..\..\disk\$(BUILD_ALT_DIR)
!ENDIF

TARGETPATH=$(SAMPLE_COMMON_DIR)


TARGETLIBS=  $(DDK_LIB_PATH)\wdmsec.lib

SOURCES= filter.c \
	 filter.rc

