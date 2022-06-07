#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ListenerSoundZone {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnListenerEnteredZone, (app::ListenerSoundZone * this_ptr, app::ISoundListener * listener))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnListenerExitsZone, (app::ListenerSoundZone * this_ptr, app::ISoundListener * listener, bool force_reset))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnListenerUpdateZone, (app::ListenerSoundZone * this_ptr, app::ISoundListener * listener, app::Vector2 distances, bool has_position_changed))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetAdditionalTracking, (app::ListenerSoundZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA9280, void, OnDrawGizmos, (app::ListenerSoundZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA9290, void, DrawGizmoCircle, (app::ListenerSoundZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ListenerSoundZone * this_ptr))
}
