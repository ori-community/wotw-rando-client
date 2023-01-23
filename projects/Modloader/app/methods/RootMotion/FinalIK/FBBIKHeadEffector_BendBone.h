#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FBBIKHeadEffector_BendBone.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::RootMotion::FinalIK::FBBIKHeadEffector_BendBone {
    IL2CPP_REGISTER_METHOD(0x0205C030, void, ctor_1, (app::FBBIKHeadEffector_BendBone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0205C0E0, void, ctor_2, (app::FBBIKHeadEffector_BendBone * this_ptr, app::Transform* transform, float weight))
    IL2CPP_REGISTER_METHOD(0x0205C1B0, void, StoreDefaultLocalState, (app::FBBIKHeadEffector_BendBone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0205C240, void, FixTransforms, (app::FBBIKHeadEffector_BendBone * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::FBBIKHeadEffector_BendBone
