#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GhostReplaysOverview.h>
#include <Modloader/app/structs/GhostReplayMetaData.h>
#include <Modloader/app/structs/List_1_GhostReplayMetaData_.h>

namespace app::classes::GhostReplaysOverview {
    IL2CPP_REGISTER_METHOD(0x007E5060, void, AddGhostReplay, (app::GhostReplaysOverview * this_ptr, app::GhostReplayMetaData* ghost_replay_meta_data))
    IL2CPP_REGISTER_METHOD(0x007E5100, int32_t, GetReplayCount, (app::GhostReplaysOverview * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::List_1_GhostReplayMetaData_*, GetGhostReplays, (app::GhostReplaysOverview * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E5190, void, CleanUpMetaFiles, (app::GhostReplaysOverview * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E5570, void, ctor, (app::GhostReplaysOverview * this_ptr))
} // namespace app::classes::GhostReplaysOverview
