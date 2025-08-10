#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/UtilityDecorator.h>

namespace app::classes::Moon::BehaviourSystem::UtilityDecorator {
    IL2CPP_REGISTER_METHOD(0x030121D0, app::BehaviourStatus__Enum, OnExecute, app::UtilityDecorator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x03012200, float, GetUtility, app::UtilityDecorator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x030122B0, float, GetBaseUtility, app::UtilityDecorator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x03012300, void, ctor, app::UtilityDecorator* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::UtilityDecorator
