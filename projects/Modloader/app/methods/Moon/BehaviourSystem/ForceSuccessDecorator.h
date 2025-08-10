#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/ForceSuccessDecorator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::BehaviourSystem::ForceSuccessDecorator {
    IL2CPP_REGISTER_METHOD(0x0300DDF0, app::BehaviourStatus__Enum, OnExecute, app::ForceSuccessDecorator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, app::ForceSuccessDecorator* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::ForceSuccessDecorator
