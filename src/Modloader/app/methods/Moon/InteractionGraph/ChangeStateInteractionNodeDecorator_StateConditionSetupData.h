#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChangeStateInteractionNodeDecorator_StateConditionSetupData.h>

namespace app::classes::Moon::InteractionGraph::ChangeStateInteractionNodeDecorator_StateConditionSetupData {
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_DesiredValue, app::ChangeStateInteractionNodeDecorator_StateConditionSetupData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ChangeStateInteractionNodeDecorator_StateConditionSetupData* this_ptr)
} // namespace app::classes::Moon::InteractionGraph::ChangeStateInteractionNodeDecorator_StateConditionSetupData
