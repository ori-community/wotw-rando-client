#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostFrame.h>
#include <Modloader/app/structs/ReplayValidator_Snapshot.h>

namespace app::classes::Moon::Race::ReplayValidator_Snapshot {
    IL2CPP_REGISTER_METHOD(0x00C4C6B0, void, SetFrame, app::ReplayValidator_Snapshot* this_ptr, app::GhostFrame* frame, int32_t index)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ReplayValidator_Snapshot* this_ptr)
} // namespace app::classes::Moon::Race::ReplayValidator_Snapshot
