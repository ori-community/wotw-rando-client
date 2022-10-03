#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MixerSnapshot {
    IL2CPP_REGISTER_METHOD(0x0132EB50, float, get_Weight, (app::MixerSnapshot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006515B0, app::MixerSnapshot_MixerSnapshotState__Enum, get_State, (app::MixerSnapshot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0132EBA0, void, FadeIn, (app::MixerSnapshot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0132ED40, void, FadeOut, (app::MixerSnapshot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0132ED90, void, UpdateMixerSnapshotState, (app::MixerSnapshot * this_ptr, float time_delta))
    IL2CPP_REGISTER_METHOD(0x0132EE40, void, ctor, (app::MixerSnapshot * this_ptr))
} // namespace app::classes::MixerSnapshot
