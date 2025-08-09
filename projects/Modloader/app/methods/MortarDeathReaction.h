#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MortarDeathReaction.h>

namespace app::classes::MortarDeathReaction {
    IL2CPP_REGISTER_METHOD(0x00F134D0, void, OnInitializeTask, app::MortarDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x014759E0, void, OnEnterTask, app::MortarDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, app::MortarDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01475BF0, void, EndReaction, app::MortarDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, app::MortarDeathReaction* this_ptr)
} // namespace app::classes::MortarDeathReaction
