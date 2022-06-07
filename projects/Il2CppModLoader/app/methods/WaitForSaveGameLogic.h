#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WaitForSaveGameLogic {
    IL2CPP_REGISTER_METHOD(0x008C63B0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x008C6450, void, FixedUpdate, (app::WaitForSaveGameLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WaitForSaveGameLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C6760, void, cctor, ())
}
