#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/LegacyContactSwitch.h>
#include <Modloader/app/structs/Archive.h>

namespace app::classes::LegacyContactSwitch {
    IL2CPP_REGISTER_METHOD(0x00A170C0, app::Renderer*, get_Renderer, (app::LegacyContactSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17190, void, Awake, (app::LegacyContactSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17370, void, FixedUpdate, (app::LegacyContactSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17510, void, OnTriggerActivated, (app::LegacyContactSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17510, void, ToggleSwitch, (app::LegacyContactSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17560, void, TurnOn, (app::LegacyContactSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17650, void, TurnOff, (app::LegacyContactSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17790, bool, get_IsOn, (app::LegacyContactSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A177A0, void, Serialize, (app::LegacyContactSwitch * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00A17900, void, ctor, (app::LegacyContactSwitch * this_ptr))
} // namespace app::classes::LegacyContactSwitch
