#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetReplaysCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/List_1_ReplayModel_.h>

namespace app::classes::GetReplaysCallback {
    IL2CPP_REGISTER_METHOD(0x02E91BC0, void, OnResult, (app::GetReplaysCallback * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::List_1_ReplayModel_*, get_Replays, (app::GetReplaysCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E91FB0, void, ctor, (app::GetReplaysCallback * this_ptr))
} // namespace app::classes::GetReplaysCallback
