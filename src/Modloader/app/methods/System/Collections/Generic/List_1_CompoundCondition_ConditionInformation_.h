#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompoundCondition_ConditionInformation.h>
#include <Modloader/app/structs/List_1_CompoundCondition_ConditionInformation_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_CompoundCondition_ConditionInformation_.h>

namespace app::classes::System::Collections::Generic::List_1_CompoundCondition_ConditionInformation_ {
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_CompoundCondition_ConditionInformation_,
        GetEnumerator,
        app::List_1_CompoundCondition_ConditionInformation_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_CompoundCondition_ConditionInformation_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_CompoundCondition_ConditionInformation_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_CompoundCondition_ConditionInformation_* this_ptr,
        app::CompoundCondition_ConditionInformation* item
    )
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::CompoundCondition_ConditionInformation*,
        get_Item,
        app::List_1_CompoundCondition_ConditionInformation_* this_ptr,
        int32_t index
    )
} // namespace app::classes::System::Collections::Generic::List_1_CompoundCondition_ConditionInformation_
