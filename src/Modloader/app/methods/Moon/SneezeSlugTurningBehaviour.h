#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SneezeSlugTurningBehaviour.h>

namespace app::classes::Moon::SneezeSlugTurningBehaviour {
    IL2CPP_REGISTER_METHOD(0x00E2E380, void, OnInitializeTask, app::SneezeSlugTurningBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00E2E510, void, OnEnterTask, app::SneezeSlugTurningBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00E2E740, app::BehaviourStatus__Enum, OnExecuteTask, app::SneezeSlugTurningBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00D201A0, void, ctor, app::SneezeSlugTurningBehaviour* this_ptr)
} // namespace app::classes::Moon::SneezeSlugTurningBehaviour
