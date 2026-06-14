#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_IIndexedItem_.h>
#include <Modloader/app/structs/StateHolder_1_Moon_dialogGraph_ChangeStateDialogDecorator_StateConditionSetupData_.h>

namespace app::classes::StateHolder_1_Moon_dialogGraph_ChangeStateDialogDecorator_StateConditionSetupData_ {
    IL2CPP_REGISTER_METHOD(0x01D197E0, void, ctor, app::StateHolder_1_Moon_dialogGraph_ChangeStateDialogDecorator_StateConditionSetupData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D195E0,
        void,
        GetSetupStates,
        app::StateHolder_1_Moon_dialogGraph_ChangeStateDialogDecorator_StateConditionSetupData_* this_ptr,
        app::List_1_IIndexedItem_* to_populate
    )
} // namespace app::classes::StateHolder_1_Moon_dialogGraph_ChangeStateDialogDecorator_StateConditionSetupData_
