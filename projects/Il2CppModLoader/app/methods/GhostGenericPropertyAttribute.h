#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GhostGenericPropertyAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Id, (app::GhostGenericPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::GhostGenericPropertyAttribute * this_ptr, int32_t id))
}
