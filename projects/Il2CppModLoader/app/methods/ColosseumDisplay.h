#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ColosseumDisplay {
    IL2CPP_REGISTER_METHOD(0x011DAFD0, void, SetRemainingTime, (app::ColosseumDisplay * this_ptr, float seconds))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ColosseumDisplay * this_ptr))
}
