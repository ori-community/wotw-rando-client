#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumSelector_1_WandererNPC_State_.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::BehaviourSystem::EnumSelector_1_WandererNPC_State_ {
    IL2CPP_REGISTER_METHOD(0x0271C890, void, ctor, (app::EnumSelector_1_WandererNPC_State_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271C5D0, app::BehaviourStatus__Enum, OnExecute, (app::EnumSelector_1_WandererNPC_State_ * this_ptr, app::IContext* context))
} // namespace app::classes::Moon::BehaviourSystem::EnumSelector_1_WandererNPC_State_
