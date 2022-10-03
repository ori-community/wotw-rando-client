#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Wwise::AudioEmitterZoneReference {
    IL2CPP_REGISTER_METHOD(0x001FE500, void, ctor, (app::AudioEmitterZoneReference__Boxed * this_ptr, app::AudioEmitterZone* zone))
    IL2CPP_REGISTER_METHOD(0x001FE540, bool, get_IsValid, (app::AudioEmitterZoneReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::AudioEmitterZone*, get_Zone, (app::AudioEmitterZoneReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_ZoneInstanceId, (app::AudioEmitterZoneReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C20, int64_t, get_Version, (app::AudioEmitterZoneReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FE550, bool, Equals_1, (app::AudioEmitterZoneReference__Boxed * this_ptr, app::AudioEmitterZoneReference other))
    IL2CPP_REGISTER_METHOD(0x001FE5B0, bool, Equals_2, (app::AudioEmitterZoneReference__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x001FE6C0, int32_t, GetHashCode, (app::AudioEmitterZoneReference__Boxed * this_ptr))
} // namespace app::classes::Moon::Wwise::AudioEmitterZoneReference
