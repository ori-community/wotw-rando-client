#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ChangeStateInteractionNodeDecorator_StateConditionSetupHolder.h>
#include <Modloader/app/structs/ChangeStateInteractionNodeDecorator_StateConditionSetupData.h>
#include <Modloader/app/structs/List_1_IIndexedItem_.h>

namespace app::classes::Moon::InteractionGraph::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseMapping, (app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198C0C0, app::ChangeStateInteractionNodeDecorator_StateConditionSetupData*, get_DesiredState, (app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198C170, void, CacheSetupStates, (app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder * this_ptr, app::List_1_IIndexedItem_* cache_to_populate))
    IL2CPP_REGISTER_METHOD(0x0198C240, void, Perform, (app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder * this_ptr, app::ChangeStateInteractionNodeDecorator_StateConditionSetupData* state))
    IL2CPP_REGISTER_METHOD(0x0198C340, void, ctor, (app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder * this_ptr))
} // namespace app::classes::Moon::InteractionGraph::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder
