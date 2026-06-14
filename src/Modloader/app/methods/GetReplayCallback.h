#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/GetReplayCallback.h>
#include <Modloader/app/structs/ReplayModel.h>

namespace app::classes::GetReplayCallback {
    IL2CPP_REGISTER_METHOD(0x02E91930, void, OnResult, app::GetReplayCallback* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::ReplayModel*, get_Replay, app::GetReplayCallback* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E919C0, void, ctor, app::GetReplayCallback* this_ptr)
} // namespace app::classes::GetReplayCallback
