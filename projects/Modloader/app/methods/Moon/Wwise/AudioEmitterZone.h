#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioEmitterZone.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Wwise::AudioEmitterZone {
    IL2CPP_REGISTER_METHOD(0x002FB990, int64_t, get_Version, (app::AudioEmitterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Version, (app::AudioEmitterZone * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsActive, (app::AudioEmitterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsActive, (app::AudioEmitterZone * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02709650, app::String*, get_GizmoText, (app::AudioEmitterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027096E0, void, OnEnable, (app::AudioEmitterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447380, void, OnDisable, (app::AudioEmitterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AudioEmitterZone * this_ptr))
} // namespace app::classes::Moon::Wwise::AudioEmitterZone
