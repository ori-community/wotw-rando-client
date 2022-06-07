#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AuxiliarySendZone {
    IL2CPP_REGISTER_METHOD(0x0085EA80, app::String *, get_GizmoText, (app::AuxiliarySendZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085EB10, void, Awake, (app::AuxiliarySendZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEmitterEnteredZone, (app::AuxiliarySendZone * this_ptr, app::ISoundHost * host))
    IL2CPP_REGISTER_METHOD(0x0085ED60, void, OnEmitterExitsZone, (app::AuxiliarySendZone * this_ptr, app::ISoundHost * host))
    IL2CPP_REGISTER_METHOD(0x0085ED70, void, OnEmitterUpdate, (app::AuxiliarySendZone * this_ptr, app::ISoundHost * host, app::Vector2 distances, bool has_position_changed))
    IL2CPP_REGISTER_METHOD(0x0085F070, void, SetValue, (app::AuxiliarySendZone * this_ptr, app::ISoundHost * host, float value))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::SelectableCategory__Enum, get_Category, (app::AuxiliarySendZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085F280, void, ctor, (app::AuxiliarySendZone * this_ptr))
}
