#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BipedLimbOrientations.h>
#include <Modloader/app/structs/BipedLimbOrientations_LimbOrientation.h>

namespace app::classes::RootMotion::BipedLimbOrientations {
    IL2CPP_REGISTER_METHOD(
        0x0058D710,
        void,
        ctor,
        app::BipedLimbOrientations* this_ptr,
        app::BipedLimbOrientations_LimbOrientation* left_arm,
        app::BipedLimbOrientations_LimbOrientation* right_arm,
        app::BipedLimbOrientations_LimbOrientation* left_leg,
        app::BipedLimbOrientations_LimbOrientation* right_leg
    )
    IL2CPP_REGISTER_METHOD(0x021FC0C0, app::BipedLimbOrientations*, get_UMA, )
    IL2CPP_REGISTER_METHOD(0x021FC6E0, app::BipedLimbOrientations*, get_MaxBiped, )
} // namespace app::classes::RootMotion::BipedLimbOrientations
