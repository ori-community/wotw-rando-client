#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::VideoTrimMarker {
    IL2CPP_REGISTER_METHOD(0x008C08F0, void, ResetPosition, (app::VideoTrimMarker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C0B40, void, OnDrag, (app::VideoTrimMarker * this_ptr, app::PointerEventData * event_data))
    IL2CPP_REGISTER_METHOD(0x008C0F80, void, SetTime, (app::VideoTrimMarker * this_ptr, float percentage))
    IL2CPP_REGISTER_METHOD(0x008C1550, double, GetTime, (app::VideoTrimMarker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C18D0, void, OnPointerDown, (app::VideoTrimMarker * this_ptr, app::PointerEventData * event_data))
    IL2CPP_REGISTER_METHOD(0x00647DD0, void, OnPointerUp, (app::VideoTrimMarker * this_ptr, app::PointerEventData * event_data))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::VideoTrimMarker * this_ptr))
}
