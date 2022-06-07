#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BrushPreview {
    IL2CPP_REGISTER_METHOD(0x00D515A0, void, OnDrawGizmos, (app::BrushPreview * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D515C0, void, DrawCircle, (app::BrushPreview * this_ptr, float radius_scale))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BrushPreview * this_ptr))
}
