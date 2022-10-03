#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Link {
    IL2CPP_REGISTER_METHOD(0x00FA8500, float, get_Distance, (app::Link * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B96A0, app::List_1_Link_*, get_Neighbors, (app::Link * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA85F0, void, GenerateLinks, (app::Link * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA86F0, void, OnDrawGizmos, (app::Link * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Link * this_ptr))
} // namespace app::classes::Link
