#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Recoil.h>
#include <Modloader/app/structs/IKEffector.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::RootMotion::FinalIK::Recoil {
    IL2CPP_REGISTER_METHOD(0x02A1CF80, void, SetHandRotations, (app::Recoil * this_ptr, app::Quaternion left_hand_rotation, app::Quaternion right_hand_rotation))
    IL2CPP_REGISTER_METHOD(0x02A1CFB0, void, Fire, (app::Recoil * this_ptr, float magnitude))
    IL2CPP_REGISTER_METHOD(0x02A1D460, void, OnModifyOffset, (app::Recoil * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1EB60, void, AfterFBBIK, (app::Recoil * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1EF30, app::IKEffector*, get_primaryHandEffector, (app::Recoil * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1EFD0, app::IKEffector*, get_secondaryHandEffector, (app::Recoil * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1F070, app::Transform*, get_primaryHand, (app::Recoil * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1F090, app::Transform*, get_secondaryHand, (app::Recoil * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1F0B0, void, OnDestroy, (app::Recoil * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1F2C0, void, ctor, (app::Recoil * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::Recoil
