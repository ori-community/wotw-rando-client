#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CinematicEntityAnimator.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonAnimation.h>

namespace app::classes::CinematicEntityAnimator {
    IL2CPP_REGISTER_METHOD(0x010C76D0, bool, get_IsTargetPlaceholder, app::CinematicEntityAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01323B00, bool, get_IsTargetEntity, app::CinematicEntityAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C76D0, bool, IsTargetPlaceholderMethod, app::CinematicEntityAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01323B00, bool, IsTargetEntityMethod, app::CinematicEntityAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01323B10, app::Entity*, get_EffectiveEntity, app::CinematicEntityAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01323B40, app::GameObject*, get_ExternalTarget, app::CinematicEntityAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01323B80, app::MoonAnimation*, get_EffectiveAnimation, app::CinematicEntityAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01323C90, app::GameObject*, get_PreviewRig, app::CinematicEntityAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01323CF0, void, OnStartPlayback, app::CinematicEntityAnimator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01323E50, void, OnStopPlayback, app::CinematicEntityAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, app::CinematicEntityAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01323E90, void, ctor, app::CinematicEntityAnimator* this_ptr)
} // namespace app::classes::CinematicEntityAnimator
