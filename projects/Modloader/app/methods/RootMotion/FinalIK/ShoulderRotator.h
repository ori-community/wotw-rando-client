#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShoulderRotator.h>
#include <Modloader/app/structs/FullBodyBipedChain__Enum.h>
#include <Modloader/app/structs/IKMapping_BoneMap.h>

namespace app::classes::RootMotion::FinalIK::ShoulderRotator {
    IL2CPP_REGISTER_METHOD(0x02A26CD0, void, Start, (app::ShoulderRotator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A26EA0, void, RotateShoulders, (app::ShoulderRotator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A27000, void, RotateShoulder, (app::ShoulderRotator * this_ptr, app::FullBodyBipedChain__Enum chain, float weight, float offset))
    IL2CPP_REGISTER_METHOD(0x02A27B20, app::IKMapping_BoneMap*, GetParentBoneMap, (app::ShoulderRotator * this_ptr, app::FullBodyBipedChain__Enum chain))
    IL2CPP_REGISTER_METHOD(0x02A27C30, void, OnDestroy, (app::ShoulderRotator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A27E20, void, ctor, (app::ShoulderRotator * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::ShoulderRotator
