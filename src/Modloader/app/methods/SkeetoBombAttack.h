#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SkeetoBombAttack.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>

namespace app::classes::SkeetoBombAttack {
    IL2CPP_REGISTER_METHOD(0x0074D8F0, app::SkeetoLocomotion*, get_Locomotion, app::SkeetoBombAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074D9D0, app::BehaviourStatus__Enum, OnExecute, app::SkeetoBombAttack* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0074DC00, void, ctor, app::SkeetoBombAttack* this_ptr)
} // namespace app::classes::SkeetoBombAttack
