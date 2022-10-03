#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AmbienceZone {
    IL2CPP_REGISTER_METHOD(0x004F7280, app::Rect, get_EditorBounds, (app::AmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F75C0, void, set_EditorBounds, (app::AmbienceZone * this_ptr, app::Rect value))
    IL2CPP_REGISTER_METHOD(0x004F78A0, float, get_Radius, (app::AmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F78D0, void, set_Radius, (app::AmbienceZone * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x004F7AA0, float, get_InnerRadius, (app::AmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F7AC0, void, set_InnerRadius, (app::AmbienceZone * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x004F7AD0, void, Awake, (app::AmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F7AE0, void, OnDestroy, (app::AmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F7B20, void, Reset, (app::AmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04728708, AmbienceZone_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F7B30, void, OnEnable, (app::AmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F7E00, void, OnDisable, (app::AmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F7FC0, void, OnListenerEnteredZone, (app::AmbienceZone * this_ptr, app::ISoundListener* listener))
    IL2CPP_REGISTER_METHOD(0x004F8070, void, OnListenerExitsZone, (app::AmbienceZone * this_ptr, app::ISoundListener* listener, bool force_reset))
    IL2CPP_REGISTER_METHOD(0x004F8120, void, OnListenerUpdateZone, (app::AmbienceZone * this_ptr, app::ISoundListener* listener, app::Vector2 distances, bool has_position_changed))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetAdditionalTracking, (app::AmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F8440, float, CalculateRtpcValue, (app::AmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478DD20, AmbienceZone_CalculateRtpcValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F85E0, void, ActivateAmbienceZone, (app::AmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F7AE0, void, DeactivateAmbienceZone, (app::AmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F8CA0, void, ExitZone, (app::AmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::SelectableCategory__Enum, get_Category, (app::AmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F8FA0, void, ctor, (app::AmbienceZone * this_ptr))
} // namespace app::classes::AmbienceZone
