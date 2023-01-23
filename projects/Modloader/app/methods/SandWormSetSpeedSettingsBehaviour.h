#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SandWormSetSpeedSettingsBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::SandWormSetSpeedSettingsBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C269D0, void, OnEntityInitialized, (app::SandWormSetSpeedSettingsBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C26AB0, void, OnEnter, (app::SandWormSetSpeedSettingsBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417920, app::BehaviourStatus__Enum, OnExecute, (app::SandWormSetSpeedSettingsBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C26B00, void, ctor, (app::SandWormSetSpeedSettingsBehaviour * this_ptr))
} // namespace app::classes::SandWormSetSpeedSettingsBehaviour
