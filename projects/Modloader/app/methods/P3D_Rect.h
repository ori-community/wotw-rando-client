#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/P3D_Rect.h>
#include <Modloader/app/structs/P3D_Rect__Boxed.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::P3D_Rect {
    IL2CPP_REGISTER_METHOD(0x00243E50, bool, get_IsSet, app::P3D_Rect__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014B8E0, int32_t, get_Width, app::P3D_Rect__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00243E70, int32_t, get_Height, app::P3D_Rect__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0011FC50, void, ctor, app::P3D_Rect__Boxed* this_ptr, int32_t new_x_min, int32_t new_x_max, int32_t new_y_min, int32_t new_y_max)
    IL2CPP_REGISTER_METHOD(0x0011FC50, void, Set, app::P3D_Rect__Boxed* this_ptr, int32_t new_x_min, int32_t new_x_max, int32_t new_y_min, int32_t new_y_max)
    IL2CPP_REGISTER_METHOD(0x00243E80, void, Add_1, app::P3D_Rect__Boxed* this_ptr, int32_t new_x, int32_t new_y)
    IL2CPP_REGISTER_METHOD(0x00243ED0, void, Add_2, app::P3D_Rect__Boxed* this_ptr, app::P3D_Rect rect)
    IL2CPP_REGISTER_METHOD(0x00243F50, void, Add_3, app::P3D_Rect__Boxed* this_ptr, int32_t new_x_min, int32_t new_x_max, int32_t new_y_min, int32_t new_y_max)
    IL2CPP_REGISTER_METHOD(0x00243FA0, bool, Overlaps, app::P3D_Rect__Boxed* this_ptr, app::P3D_Rect other)
    IL2CPP_REGISTER_METHOD(0x00244030, void, Clear, app::P3D_Rect__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002440E0, app::Rect, get_UnityRect, app::P3D_Rect__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03096D60, void, cctor, )
} // namespace app::classes::P3D_Rect
