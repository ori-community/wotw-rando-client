#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Display {
    IL2CPP_REGISTER_METHOD(0x0063D180, void, ctor_1, (app::Display * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::Display * this_ptr, void * native_display))
    IL2CPP_REGISTER_METHOD(0x0242D9E0, int32_t, get_renderingWidth, (app::Display * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242DAE0, int32_t, get_renderingHeight, (app::Display * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242DBE0, int32_t, get_systemWidth, (app::Display * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242DCE0, int32_t, get_systemHeight, (app::Display * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242DDE0, app::Vector3, RelativeMouseAt, (app::Vector3 input_mouse_coordinates))
    IL2CPP_REGISTER_METHOD(0x0242DF10, app::Display *, get_main, ())
    IL2CPP_REGISTER_METHOD(0x0242DFB0, void, RecreateDisplayList, (app::IntPtr__Array * native_display))
    IL2CPP_REGISTER_METHOD(0x0242E260, void, FireDisplaysUpdated, ())
    IL2CPP_REGISTER_METHOD(0x0242E340, void, GetSystemExtImpl, (void * native_display, int32_t * w, int32_t * h))
    IL2CPP_REGISTER_METHOD(0x0242E3B0, void, GetRenderingExtImpl, (void * native_display, int32_t * w, int32_t * h))
    IL2CPP_REGISTER_METHOD(0x0242E420, int32_t, RelativeMouseAtImpl, (int32_t x, int32_t y, int32_t * rx, int32_t * ry))
    IL2CPP_REGISTER_METHOD(0x0242E4A0, void, cctor, ())
}
