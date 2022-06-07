#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::SandWormBodyWavePlayer {
    IL2CPP_REGISTER_METHOD(0x00781E30, void, OnStartPlayback, (app::SandWormBodyWavePlayer * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00781EF0, void, OnUpdateEntity, (app::SandWormBodyWavePlayer * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00781F20, void, OnStopPlayback, (app::SandWormBodyWavePlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00781FD0, void, SynchronizeData, (app::SandWormBodyWavePlayer * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record))
    IL2CPP_REGISTER_METHOD(0x00782150, void, ctor, (app::SandWormBodyWavePlayer * this_ptr))
}
