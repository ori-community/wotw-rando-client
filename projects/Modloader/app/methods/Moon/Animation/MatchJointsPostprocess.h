#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MatchJointsPostprocess.h>
#include <Modloader/app/structs/AnimatorPostprocessUpdateData.h>
#include <Modloader/app/structs/Playable.h>

namespace app::classes::Moon::Animation::MatchJointsPostprocess {
    IL2CPP_REGISTER_METHOD(0x01B02490, void, OnAllocateJobData, (app::MatchJointsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeallocateJobData, (app::MatchJointsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B024D0, void, OnUpdateAnimatorPostprocessData, (app::MatchJointsPostprocess * this_ptr, app::Playable playable, app::AnimatorPostprocessUpdateData update_data))
    IL2CPP_REGISTER_METHOD(0x01B025D0, void, ctor, (app::MatchJointsPostprocess * this_ptr))
} // namespace app::classes::Moon::Animation::MatchJointsPostprocess
