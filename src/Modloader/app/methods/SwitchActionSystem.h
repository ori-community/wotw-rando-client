#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/SwitchActionSystem.h>

namespace app::classes::SwitchActionSystem {
    IL2CPP_REGISTER_METHOD(0x018339F0, void, Awake, app::SwitchActionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01833B00, void, FixedUpdate, app::SwitchActionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01833E20, void, AllSwitchesOn, app::SwitchActionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01833F00, void, AllSwitchesOff, app::SwitchActionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01833FE0, void, Serialize, app::SwitchActionSystem* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x01834010, void, ctor, app::SwitchActionSystem* this_ptr)
} // namespace app::classes::SwitchActionSystem
