#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SoundZoneTrigger {
    IL2CPP_REGISTER_METHOD(0x00EF3770, app::String *, get_GizmoText, (app::SoundZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF3800, bool, get_HasTriggered, (app::SoundZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF38E0, void, set_HasTriggered, (app::SoundZoneTrigger * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00EF39C0, app::SoundHost *, get_EffectiveSoundHost, (app::SoundZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF3AE0, bool, get_WithinBounds, (app::SoundZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF3D60, void, Awake, (app::SoundZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF43C0, void, OnDestroy, (app::SoundZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF4560, void, Update, (app::SoundZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2AC20, void, OnRestoreCheckpoint, (app::SoundZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04796710, SoundZoneTrigger_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EF4570, void, OnListenerEnteredZone, (app::SoundZoneTrigger * this_ptr, app::ISoundListener * listener))
    IL2CPP_REGISTER_METHOD(0x00EF4590, void, OnListenerExitsZone, (app::SoundZoneTrigger * this_ptr, app::ISoundListener * listener, bool force_reset))
    IL2CPP_REGISTER_METHOD(0x00EF45D0, void, OnListenerUpdateZone, (app::SoundZoneTrigger * this_ptr, app::ISoundListener * listener, app::Vector2 distances, bool has_position_changed))
    IL2CPP_REGISTER_METHOD(0x00EF45F0, void, ResetAdditionalTracking, (app::SoundZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF4600, void, Triggered, (app::SoundZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF49E0, void, CheckCharacterPosition, (app::SoundZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::SelectableCategory__Enum, get_Category, (app::SoundZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SoundZoneTrigger * this_ptr))
}
