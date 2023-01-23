#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ActivateDamageAnimator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::ActivateDamageAnimator {
    IL2CPP_REGISTER_METHOD(0x00A35F10, bool, ShouldShowDamageField, (app::ActivateDamageAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C67B0, void, Awake, (app::ActivateDamageAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C67C0, void, OnDisable, (app::ActivateDamageAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C67D0, void, OnDestroy, (app::ActivateDamageAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C67F0, void, OnStartPlayback, (app::ActivateDamageAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010C68E0, void, OnStopPlayback, (app::ActivateDamageAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C6920, void, CacheComponents, (app::ActivateDamageAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C6B50, void, ApplyOverrides, (app::ActivateDamageAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C6FE0, void, RemoveOverrides, (app::ActivateDamageAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C7200, void, ctor, (app::ActivateDamageAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::ActivateDamageAnimator
