#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SegmentMembershipChange.h>

namespace app::classes::PlayFab::PlayStreamModels::SegmentMembershipChange {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SegmentMembershipChange * this_ptr))
}
