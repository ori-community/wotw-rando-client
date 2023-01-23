#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CC_Base.h>
#include <Modloader/app/structs/Material.h>

namespace app::classes::CC_Base {
    IL2CPP_REGISTER_METHOD(0x031922C0, void, Start, (app::CC_Base * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03192490, app::Material*, get_material, (app::CC_Base * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03192670, void, OnDisable, (app::CC_Base * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CC_Base * this_ptr))
} // namespace app::classes::CC_Base
