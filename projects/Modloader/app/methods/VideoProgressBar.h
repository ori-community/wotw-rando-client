#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::VideoProgressBar {
    IL2CPP_REGISTER_METHOD(0x008C04B0, void, Awake, (app::VideoProgressBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C0540, void, Update, (app::VideoProgressBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C0630, void, OnDrag, (app::VideoProgressBar * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x008C0630, void, OnPointerDown, (app::VideoProgressBar * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x008C0640, void, TrySkip, (app::VideoProgressBar * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::VideoProgressBar * this_ptr))
} // namespace app::classes::VideoProgressBar
