#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ChallengeShrineAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x010415F0, void, OnStartPlayback, (app::ChallengeShrineAnimatorEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01041690, void, ctor, (app::ChallengeShrineAnimatorEntity * this_ptr))
} // namespace app::classes::ChallengeShrineAnimatorEntity
