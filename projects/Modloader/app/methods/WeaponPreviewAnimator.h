#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WeaponPreviewAnimator {
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, SetFrame, (app::WeaponPreviewAnimator * this_ptr, app::Transform* attached_joint))
    IL2CPP_REGISTER_METHOD(0x0056FD80, void, LateUpdate, (app::WeaponPreviewAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0056FE40, void, Awake, (app::WeaponPreviewAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0056FE50, void, OnDestroy, (app::WeaponPreviewAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0056FE60, void, ctor, (app::WeaponPreviewAnimator * this_ptr))
} // namespace app::classes::WeaponPreviewAnimator
