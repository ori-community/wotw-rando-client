#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_StateCondition_StateConditionSetupData_.h>
#include <Modloader/app/structs/StateCondition_StateConditionSetupData.h>

namespace app::classes::System::Collections::Generic::List_1_StateCondition_StateConditionSetupData_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_StateCondition_StateConditionSetupData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::StateCondition_StateConditionSetupData*,
        get_Item,
        app::List_1_StateCondition_StateConditionSetupData_* this_ptr,
        int32_t index
    )
} // namespace app::classes::System::Collections::Generic::List_1_StateCondition_StateConditionSetupData_
