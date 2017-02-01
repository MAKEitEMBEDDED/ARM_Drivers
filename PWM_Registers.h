/*
 * PWM_Registers.h
 *
 * Created: 1/21/2017 3:52:08 PM
 *  Author: Jessy
 */ 
#include "PWM_Base_Address.h"
#include "PWM_Offsets.h"
#include "Data-Types.h"

#ifndef PWM_REGISTERS_H_
#define PWM_REGISTERS_H_

#define PWM_RCGC			(*((volatile u32*)(RCGC_Register		+	_PWM_RCGC		)))

/************************************************************************/
/*						PWM0 Module Registers                           */
/************************************************************************/

#define PWMCTL_PWM0			(*((volatile u32*)(PWM0_Base_Address	+	_PWMCTL			)))
#define PWMSYNC_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWMSYNC		)))
#define PWMENABLE_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWMENABLE		)))
#define PWMINVERT_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWMINVERT		)))
#define PWMFAULT_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWMFAULT		)))
#define PWMINTEN_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWMINTEN		)))
#define PWMRIS_PWM0			(*((volatile u32*)(PWM0_Base_Address	+	_PWMRIS			)))
#define PWMISC_PWM0			(*((volatile u32*)(PWM0_Base_Address	+	_PWMISC			)))
#define PWMSTATUS_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWMSTATUS		)))
#define PWMFAULTVAL_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWMFAULTVAL	)))
#define PWMENUPD_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWMENUPD		)))

#define PWM0CTL_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM0CTL		)))
#define PWM0INTEN_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM0INTEN		)))
#define PWM0RIS_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM0RIS		)))
#define PWM0ISC_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM0ISC		)))
#define PWM0LOAD_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM0LOAD		)))
#define PWM0COUNT_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM0COUNT		)))
#define PWM0CMPA_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM0CMPA		)))
#define PWM0CMPB_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM0CMPB		)))
#define PWM0GENA_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM0GENA		)))
#define PWM0GENB_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM0GENB		)))
#define PWM0DBCTL_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM0DBCTL		)))
#define PWM0DBRISE_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM0DBRISE		)))
#define PWM0DBFALL_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM0DBFALL		)))
#define PWM0FLTSRC0_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM0FLTSRC0	)))
#define PWM0FLTSRC1_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM0FLTSRC1	)))
#define PWM0MINFLTPER_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM0MINFLTPER	)))

#define PWM1CTL_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM1CTL		)))
#define PWM1INTEN_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM1INTEN		)))
#define PWM1RIS_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM1RIS		)))
#define PWM1ISC_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM1ISC		)))
#define PWM1LOAD_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM1LOAD		)))
#define PWM1COUNT_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM1COUNT		)))
#define PWM1CMPA_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM1CMPA		)))
#define PWM1CMPB_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM1CMPB		)))
#define PWM1GENA_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM1GENA		)))
#define PWM1GENB_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM1GENB		)))
#define PWM1DBCTL_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM1DBCTL		)))
#define PWM1DBRISE_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM1DBRISE		)))
#define PWM1DBFALL_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM1DBFALL		)))
#define PWM1FLTSRC0_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM1FLTSRC0	)))
#define PWM1FLTSRC1_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM1FLTSRC1	)))
#define PWM1MINFLTPER_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM1MINFLTPER	)))

#define PWM2CTL_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM2CTL		)))
#define PWM2INTEN_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM2INTEN		)))
#define PWM2RIS_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM2RIS		)))
#define PWM2ISC_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM2ISC		)))
#define PWM2LOAD_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM2LOAD		)))
#define PWM2COUNT_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM2COUNT		)))
#define PWM2CMPA_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM2CMPA		)))
#define PWM2CMPB_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM2CMPB		)))
#define PWM2GENA_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM2GENA		)))
#define PWM2GENB_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM2GENB		)))
#define PWM2DBCTL_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM2DBCTL		)))
#define PWM2DBRISE_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM2DBRISE		)))
#define PWM2DBFALL_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM2DBFALL		)))
#define PWM2FLTSRC0_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM2FLTSRC0	)))
#define PWM2FLTSRC1_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM2FLTSRC1	)))
#define PWM2MINFLTPER_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM2MINFLTPER	)))

#define PWM3CTL_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM3CTL		)))
#define PWM3INTEN_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM3INTEN		)))
#define PWM3RIS_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM3RIS		)))
#define PWM3ISC_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM3ISC		)))
#define PWM3LOAD_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM3LOAD		)))
#define PWM3COUNT_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM3COUNT		)))
#define PWM3CMPA_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM3CMPA		)))
#define PWM3CMPB_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM3CMPB		)))
#define PWM3GENA_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM3GENA		)))
#define PWM3GENB_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM3GENB		)))
#define PWM3DBCTL_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM3DBCTL		)))
#define PWM3DBRISE_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM3DBRISE		)))
#define PWM3DBFALL_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM3DBFALL		)))
#define PWM3FLTSRC0_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM3FLTSRC0	)))
#define PWM3FLTSRC1_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM3FLTSRC1	)))
#define PWM3MINFLTPER_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM3MINFLTPER	)))

#define PWM0FLTSEN_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM0FLTSEN		)))
#define PWM0FLTSTAT0_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM0FLTSTAT0	)))
#define PWM0FLTSTAT1_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM0FLTSTAT1	)))

#define PWM1FLTSEN_PWM0		(*((volatile u32*)(PWM0_Base_Address	+	_PWM1FLTSEN		)))
#define PWM1FLTSTAT0_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM1FLTSTAT0	)))
#define PWM1FLTSTAT1_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM1FLTSTAT1	)))

#define PWM2FLTSTAT0_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM2FLTSTAT0	)))
#define PWM2FLTSTAT1_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM2FLTSTAT1	)))

#define PWM3FLTSTAT0_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM3FLTSTAT0	)))
#define PWM3FLTSTAT1_PWM0	(*((volatile u32*)(PWM0_Base_Address	+	_PWM3FLTSTAT1	)))

#define PWMPP_PWM0			(*((volatile u32*)(PWM0_Base_Address	+	_PWMPP			)))


/************************************************************************/
/*						PWM0 Module Registers                           */
/************************************************************************/
#define PWMCTL_PWM1			(*((volatile u32*)(PWM1_Base_Address	+	_PWMCTL			)))
#define PWMSYNC_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWMSYNC		)))
#define PWMENABLE_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWMENABLE		)))
#define PWMINVERT_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWMINVERT		)))
#define PWMFAULT_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWMFAULT		)))
#define PWMINTEN_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWMINTEN		)))
#define PWMRIS_PWM1			(*((volatile u32*)(PWM1_Base_Address	+	_PWMRIS			)))
#define PWMISC_PWM1			(*((volatile u32*)(PWM1_Base_Address	+	_PWMISC			)))
#define PWMSTATUS_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWMSTATUS		)))
#define PWMFAULTVAL_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWMFAULTVAL	)))
#define PWMENUPD_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWMENUPD		)))

#define PWM0CTL_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1CTL		)))
#define PWM0INTEN_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1INTEN		)))
#define PWM0RIS_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1RIS		)))
#define PWM0ISC_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1ISC		)))
#define PWM0LOAD_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1LOAD		)))
#define PWM0COUNT_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1COUNT		)))
#define PWM0CMPA_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1CMPA		)))
#define PWM0CMPB_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1CMPB		)))
#define PWM0GENA_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1GENA		)))
#define PWM0GENB_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1GENB		)))
#define PWM0DBCTL_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1DBCTL		)))
#define PWM0DBRISE_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1DBRISE		)))
#define PWM0DBFALL_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1DBFALL		)))
#define PWM0FLTSRC0_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM1FLTSRC0	)))
#define PWM0FLTSRC1_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM1FLTSRC1	)))
#define PWM0MINFLTPER_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM1MINFLTPER	)))

#define PWM1CTL_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1CTL		)))
#define PWM1INTEN_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1INTEN		)))
#define PWM1RIS_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1RIS		)))
#define PWM1ISC_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1ISC		)))
#define PWM1LOAD_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1LOAD		)))
#define PWM1COUNT_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1COUNT		)))
#define PWM1CMPA_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1CMPA		)))
#define PWM1CMPB_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1CMPB		)))
#define PWM1GENA_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1GENA		)))
#define PWM1GENB_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1GENB		)))
#define PWM1DBCTL_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1DBCTL		)))
#define PWM1DBRISE_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1DBRISE		)))
#define PWM1DBFALL_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1DBFALL		)))
#define PWM1FLTSRC0_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM1FLTSRC0	)))
#define PWM1FLTSRC1_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM1FLTSRC1	)))
#define PWM1MINFLTPER_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM1MINFLTPER	)))

#define PWM2CTL_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM2CTL		)))
#define PWM2INTEN_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM2INTEN		)))
#define PWM2RIS_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM2RIS		)))
#define PWM2ISC_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM2ISC		)))
#define PWM2LOAD_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM2LOAD		)))
#define PWM2COUNT_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM2COUNT		)))
#define PWM2CMPA_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM2CMPA		)))
#define PWM2CMPB_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM2CMPB		)))
#define PWM2GENA_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM2GENA		)))
#define PWM2GENB_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM2GENB		)))
#define PWM2DBCTL_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM2DBCTL		)))
#define PWM2DBRISE_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM2DBRISE		)))
#define PWM2DBFALL_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM2DBFALL		)))
#define PWM2FLTSRC0_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM2FLTSRC0	)))
#define PWM2FLTSRC1_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM2FLTSRC1	)))
#define PWM2MINFLTPER_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM2MINFLTPER	)))

#define PWM3CTL_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM3CTL		)))
#define PWM3INTEN_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM3INTEN		)))
#define PWM3RIS_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM3RIS		)))
#define PWM3ISC_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM3ISC		)))
#define PWM3LOAD_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM3LOAD		)))
#define PWM3COUNT_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM3COUNT		)))
#define PWM3CMPA_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM3CMPA		)))
#define PWM3CMPB_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM3CMPB		)))
#define PWM3GENA_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM3GENA		)))
#define PWM3GENB_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM3GENB		)))
#define PWM3DBCTL_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM3DBCTL		)))
#define PWM3DBRISE_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM3DBRISE		)))
#define PWM3DBFALL_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM3DBFALL		)))
#define PWM3FLTSRC0_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM3FLTSRC0	)))
#define PWM3FLTSRC1_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM3FLTSRC1	)))
#define PWM3MINFLTPER_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM3MINFLTPER	)))

#define PWM0FLTSEN_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1FLTSEN		)))
#define PWM0FLTSTAT0_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM1FLTSTAT0	)))
#define PWM0FLTSTAT1_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM1FLTSTAT1	)))

#define PWM1FLTSEN_PWM1		(*((volatile u32*)(PWM1_Base_Address	+	_PWM1FLTSEN		)))
#define PWM1FLTSTAT0_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM1FLTSTAT0	)))
#define PWM1FLTSTAT1_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM1FLTSTAT1	)))

#define PWM2FLTSTAT0_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM2FLTSTAT0	)))
#define PWM2FLTSTAT1_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM2FLTSTAT1	)))

#define PWM3FLTSTAT0_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM3FLTSTAT0	)))
#define PWM3FLTSTAT1_PWM1	(*((volatile u32*)(PWM1_Base_Address	+	_PWM3FLTSTAT1	)))

#define PWMPP_PWM1			(*((volatile u32*)(PWM1_Base_Address	+	_PWMPP			)))

#endif /* PWM_REGISTERS_H_ */