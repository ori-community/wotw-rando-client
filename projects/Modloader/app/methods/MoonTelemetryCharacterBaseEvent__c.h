#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MoonTelemetryCharacterBaseEvent___c {
    IL2CPP_REGISTER_METHOD(0x01469DC0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonTelemetryCharacterBaseEvent_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01469F00, bool, _UpdateAbilitiesCache_b__33_0, (app::MoonTelemetryCharacterBaseEvent_c * this_ptr, app::AbilityType__Enum s))
    IL2CPP_REGISTER_METHODINFO(0x04780A08, MoonTelemetryCharacterBaseEvent_c__UpdateAbilitiesCache_b__33_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01469FC0, bool, _UpdateShardCache_b__36_0, (app::MoonTelemetryCharacterBaseEvent_c * this_ptr, app::PlayerUberStateShards_Shard* s))
    IL2CPP_REGISTER_METHODINFO(0x0473EB08, MoonTelemetryCharacterBaseEvent_c__UpdateShardCache_b__36_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0092ABE0, bool, _UpdateShardCache_b__36_1, (app::MoonTelemetryCharacterBaseEvent_c * this_ptr, app::PlayerUberStateShards_Shard* s))
    IL2CPP_REGISTER_METHODINFO(0x0470EF08, MoonTelemetryCharacterBaseEvent_c__UpdateShardCache_b__36_1__MethodInfo)
} // namespace app::classes::MoonTelemetryCharacterBaseEvent___c
