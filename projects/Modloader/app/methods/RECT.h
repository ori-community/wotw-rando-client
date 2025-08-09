#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Rect__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::RECT {
    IL2CPP_REGISTER_METHOD(0x0011FC50, void, ctor, app::RECT__Boxed* this_ptr, int32_t left, int32_t top, int32_t right, int32_t bottom)
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_X, app::RECT__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0011FC70, void, set_X, app::RECT__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00113CE0, int32_t, get_Y, app::RECT__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0011FC80, void, set_Y, app::RECT__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0011FC90, int32_t, get_Height, app::RECT__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0011FCA0, void, set_Height, app::RECT__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0011FCB0, int32_t, get_Width, app::RECT__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0011FCC0, void, set_Width, app::RECT__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00E96EE0, bool, op_Equality, app::RECT r1, app::RECT r2)
    IL2CPP_REGISTER_METHOD(0x00E96F20, bool, op_Inequality, app::RECT r1, app::RECT r2)
    IL2CPP_REGISTER_METHOD(0x0011FCD0, bool, Equals_1, app::RECT__Boxed* this_ptr, app::RECT r)
    IL2CPP_REGISTER_METHOD(0x0011FD10, bool, Equals_2, app::RECT__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0011FE20, app::String*, ToString, app::RECT__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0011FE30, int32_t, GetHashCode, app::RECT__Boxed* this_ptr)
    inline bool operator==(app::RECT r1, app::RECT r2) { return op_Equality(r1, r2); }
    inline bool operator!=(app::RECT r1, app::RECT r2) { return op_Inequality(r1, r2); }
} // namespace app::classes::RECT
