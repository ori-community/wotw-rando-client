#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LegacyAnimatorSerializer {
    IL2CPP_REGISTER_METHOD(0x015CD310, void, OnValidate, (app::LegacyAnimatorSerializer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CD3A0, void, Serialize, (app::LegacyAnimatorSerializer * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::LegacyAnimatorSerializer * this_ptr))
}
