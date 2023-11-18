#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_GenericDamageTrigger_DamageTriggerSetupData_.h>
#include <Modloader/app/structs/GenericDamageTrigger_DamageTriggerSetupData.h>

namespace app::classes::System::Collections::Generic::List_1_GenericDamageTrigger_DamageTriggerSetupData_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_GenericDamageTrigger_DamageTriggerSetupData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::GenericDamageTrigger_DamageTriggerSetupData*, get_Item, (app::List_1_GenericDamageTrigger_DamageTriggerSetupData_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::Generic::List_1_GenericDamageTrigger_DamageTriggerSetupData_
