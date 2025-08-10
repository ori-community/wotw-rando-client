#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/WeaponAnimationPostprocess.h>

namespace app::classes::Moon::WeaponAnimationPostprocess {
    IL2CPP_REGISTER_METHOD(0x00F2A6C0, void, OnAddedToAnimator, app::WeaponAnimationPostprocess* this_ptr, app::MoonAnimator* animator)
    IL2CPP_REGISTER_METHOD(0x00F2A700, void, OnDrawGizmosSelected, app::WeaponAnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F2A710, void, OnDrawGizmos, app::WeaponAnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F2AE00, void, CastTerrain, app::WeaponAnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F2B3F0, void, Process, app::WeaponAnimationPostprocess* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00F2BFA0, void, ctor, app::WeaponAnimationPostprocess* this_ptr)
} // namespace app::classes::Moon::WeaponAnimationPostprocess
