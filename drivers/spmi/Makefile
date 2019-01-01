#
# Makefile for kernel SPMI framework.
#
obj-$(CONFIG_SPMI)	+= spmi.o

obj-$(CONFIG_SPMI_MSM_PMIC_ARB)	+= spmi-pmic-arb.o

obj-$(CONFIG_VIRTSPMI_MSM_PMIC_ARB)	+= virtspmi-pmic-arb.o

CFLAGS_virtspmi-pmic-arb.o += $(call cc-disable-warning,incompatible-pointer-types)
