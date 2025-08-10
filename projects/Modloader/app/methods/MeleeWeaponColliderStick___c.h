#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/MeleeWeaponColliderStick_c.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MeleeWeaponColliderStick___c {
    IL2CPP_REGISTER_METHOD(0x009CCD10, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MeleeWeaponColliderStick_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__73_0, app::MeleeWeaponColliderStick_c* this_ptr, app::Collider* _p0_, app::Vector3 _p1_)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        __ctor_b__73_1,
        app::MeleeWeaponColliderStick_c* this_ptr,
        app::Collider* _p0_,
        app::Vector3 _p1_,
        app::Vector3 _p2_,
        app::Vector3 _p3_
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        __ctor_b__73_2,
        app::MeleeWeaponColliderStick_c* this_ptr,
        app::Vector3 _p0_,
        app::Vector3 _p1_,
        app::Vector3 _p2_,
        app::SurfaceMaterialType__Enum _p3_
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__73_3, app::MeleeWeaponColliderStick_c* this_ptr, app::Collider* _p0_, app::Vector3 _p1_)
} // namespace app::classes::MeleeWeaponColliderStick___c
