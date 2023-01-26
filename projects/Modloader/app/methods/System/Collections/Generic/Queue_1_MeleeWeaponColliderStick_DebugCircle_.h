#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Queue_1_MeleeWeaponColliderStick_DebugCircle_.h>
#include <Modloader/app/structs/MeleeWeaponColliderStick_DebugCircle.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_MeleeWeaponColliderStick_DebugCircle_.h>

namespace app::classes::System::Collections::Generic::Queue_1_MeleeWeaponColliderStick_DebugCircle_ {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_MeleeWeaponColliderStick_DebugCircle_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_MeleeWeaponColliderStick_DebugCircle_ * this_ptr, app::MeleeWeaponColliderStick_DebugCircle* item))
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::MeleeWeaponColliderStick_DebugCircle*, Dequeue, (app::Queue_1_MeleeWeaponColliderStick_DebugCircle_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA7860, app::MeleeWeaponColliderStick_DebugCircle*, Peek, (app::Queue_1_MeleeWeaponColliderStick_DebugCircle_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA76E0, app::Queue_1_T_Enumerator_MeleeWeaponColliderStick_DebugCircle_, GetEnumerator, (app::Queue_1_MeleeWeaponColliderStick_DebugCircle_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, (app::Queue_1_MeleeWeaponColliderStick_DebugCircle_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Queue_1_MeleeWeaponColliderStick_DebugCircle_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Queue_1_MeleeWeaponColliderStick_DebugCircle_
