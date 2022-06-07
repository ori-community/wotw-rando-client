#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RecorderPostRender {
    IL2CPP_REGISTER_METHOD(0x008F99F0, void, OnPostRender, (app::RecorderPostRender * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RecorderPostRender * this_ptr))
}
