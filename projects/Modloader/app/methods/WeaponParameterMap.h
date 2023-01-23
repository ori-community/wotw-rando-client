#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WeaponParameterMap.h>

namespace app::classes::WeaponParameterMap {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WeaponParameterMap * this_ptr))
}
