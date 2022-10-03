#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::SandWormSquetchPlayer {
    IL2CPP_REGISTER_METHOD(0x00782210, void, OnStartPlayback, (app::SandWormSquetchPlayer * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00781EF0, void, OnUpdateEntity, (app::SandWormSquetchPlayer * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x007822D0, void, OnStopPlayback, (app::SandWormSquetchPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00782380, void, SynchronizeData, (app::SandWormSquetchPlayer * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x00782500, void, ctor, (app::SandWormSquetchPlayer * this_ptr))
} // namespace app::classes::Moon::Timeline::SandWormSquetchPlayer
