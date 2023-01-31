#pragma once
/******************************************************************************/
/* File   : McalLin.hpp                                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infMcalLin_ServiceNvM_Types.hpp"
#include "CfgMcalLin.hpp"
#include "McalLin_core.hpp"
#include "infMcalLin_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalLin:
      INTERFACES_EXPORTED_MCALLIN
      public abstract_module
   ,  public class_McalLin_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, MCALLIN_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, MCALLIN_CONST,       MCALLIN_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALLIN_CONFIG_DATA, MCALLIN_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MCALLIN_CODE) DeInitFunction (void);
      FUNC(void, MCALLIN_CODE) MainFunction   (void);
      MCALLIN_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_McalLin, MCALLIN_VAR) McalLin;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

