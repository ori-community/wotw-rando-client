#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FieldOfViewOffsetAnimator {
    IL2CPP_REGISTER_METHOD(0x01255970, void, OnUpdateEntity, (app::FieldOfViewOffsetAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01255A00, void, OnStartPlayback, (app::FieldOfViewOffsetAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01255AC0, void, OnStopPlayback, (app::FieldOfViewOffsetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01255AC0, void, OnDisable, (app::FieldOfViewOffsetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01255AD0, void, UpdateWithTime, (app::FieldOfViewOffsetAnimator * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x01255B50, bool, get_FOVInfluencerIsValid, (app::FieldOfViewOffsetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01255C00, float, get_FOVInfluencerTargetZ, (app::FieldOfViewOffsetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC020, float, get_FOVInfluencerWeight, (app::FieldOfViewOffsetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC030, void, set_FOVInfluencerWeight, (app::FieldOfViewOffsetAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00B32900, float, get_FOVInfluencerOffset, (app::FieldOfViewOffsetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01255D30, void, OnStartWhenPlaybackOrPreview, (app::FieldOfViewOffsetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01255DD0, void, OnStopWhenPlaybackOrPreview, (app::FieldOfViewOffsetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01255E70, void, ctor, (app::FieldOfViewOffsetAnimator * this_ptr))
} // namespace app::classes::FieldOfViewOffsetAnimator
