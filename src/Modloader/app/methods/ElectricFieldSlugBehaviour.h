#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/ElectricFieldSlugBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ElectricFieldSlugBehaviour {
    IL2CPP_REGISTER_METHOD(0x00BF7C50, void, OnEnter, app::ElectricFieldSlugBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00BF7DF0, void, OnExit, app::ElectricFieldSlugBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00BF8110, app::BehaviourStatus__Enum, OnExecute, app::ElectricFieldSlugBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00BF8680, void, ctor, app::ElectricFieldSlugBehaviour* this_ptr)
} // namespace app::classes::ElectricFieldSlugBehaviour
