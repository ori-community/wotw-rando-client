#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RectOffset.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::RectOffset {
    IL2CPP_REGISTER_METHOD(0x0296DE00, void, ctor_1, app::RectOffset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0231B8E0, void, ctor_2, app::RectOffset* this_ptr, app::Object* source_style, void* source)
    IL2CPP_REGISTER_METHOD(0x0296DE60, void*, InternalCreate, )
    IL2CPP_REGISTER_METHOD(0x0296DEB0, void, InternalDestroy, void* ptr)
    IL2CPP_REGISTER_METHOD(0x0296DF00, int32_t, get_left, app::RectOffset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0296DF50, void, set_left, app::RectOffset* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0296DFB0, int32_t, get_right, app::RectOffset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0296E000, void, set_right, app::RectOffset* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0296E060, int32_t, get_top, app::RectOffset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0296E0B0, void, set_top, app::RectOffset* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0296E110, int32_t, get_bottom, app::RectOffset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0296E160, void, set_bottom, app::RectOffset* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0296E1C0, int32_t, get_horizontal, app::RectOffset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0296E210, int32_t, get_vertical, app::RectOffset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0296E260, app::Rect, Remove, app::RectOffset* this_ptr, app::Rect rect)
    IL2CPP_REGISTER_METHOD(0x0296E2F0, void, Finalize, app::RectOffset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0296E410, app::String*, ToString, app::RectOffset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0296E770, void, Destroy, app::RectOffset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0296E840, void, Remove_Injected, app::RectOffset* this_ptr, app::Rect* rect, app::Rect* ret)
} // namespace app::classes::UnityEngine::RectOffset
