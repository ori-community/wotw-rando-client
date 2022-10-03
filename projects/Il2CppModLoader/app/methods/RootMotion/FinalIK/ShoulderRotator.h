#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::ShoulderRotator {
    IL2CPP_REGISTER_METHOD(0x02A26CD0, void, Start, (app::ShoulderRotator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A26EA0, void, RotateShoulders, (app::ShoulderRotator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478B7F0, ShoulderRotator_RotateShoulders__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A27000, void, RotateShoulder, (app::ShoulderRotator * this_ptr, app::FullBodyBipedChain__Enum chain, float weight, float offset))
    IL2CPP_REGISTER_METHOD(0x02A27B20, app::IKMapping_BoneMap*, GetParentBoneMap, (app::ShoulderRotator * this_ptr, app::FullBodyBipedChain__Enum chain))
    IL2CPP_REGISTER_METHOD(0x02A27C30, void, OnDestroy, (app::ShoulderRotator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A27E20, void, ctor, (app::ShoulderRotator * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::ShoulderRotator
