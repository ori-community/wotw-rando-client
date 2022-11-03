#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::dialogGraph::ChangeStateDialogDecorator_StateConditionSetupHolder {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseMapping, (app::ChangeStateDialogDecorator_StateConditionSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F2C7F0, app::ChangeStateDialogDecorator_StateConditionSetupData*, get_DesiredState, (app::ChangeStateDialogDecorator_StateConditionSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F2C8A0, void, CacheSetupStates, (app::ChangeStateDialogDecorator_StateConditionSetupHolder * this_ptr, app::List_1_IIndexedItem_* cache_to_populate))
    IL2CPP_REGISTER_METHOD(0x00F2C970, void, Perform, (app::ChangeStateDialogDecorator_StateConditionSetupHolder * this_ptr, app::ChangeStateDialogDecorator_StateConditionSetupData* state))
    IL2CPP_REGISTER_METHOD(0x00F2CA70, void, ctor, (app::ChangeStateDialogDecorator_StateConditionSetupHolder * this_ptr))
} // namespace app::classes::Moon::dialogGraph::ChangeStateDialogDecorator_StateConditionSetupHolder
