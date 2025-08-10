#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IMoonSetupVisuals.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TransparentWallAnimator.h>

namespace app::classes::TransparentWallAnimator {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonSetupVisuals*, get_MoonSetupVisuals, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0C110, app::GameObject*, get_FadeTarget, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0C190, app::Transform*, get_SoundTarget, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0C210, bool, get_IsPlaying, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0C2E0, void, Stop, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0C530, void, PlayTimeline, app::TransparentWallAnimator* this_ptr, app::MoonTimeline* timeline, app::Action* on_finish)
    IL2CPP_REGISTER_METHOD(0x00B0C5A0, void, Enter, app::TransparentWallAnimator* this_ptr, app::Action* on_finish)
    IL2CPP_REGISTER_METHOD(0x00B0C610, void, EnterFirstTime, app::TransparentWallAnimator* this_ptr, app::Action* on_finish)
    IL2CPP_REGISTER_METHOD(0x00B0C680, void, Exit, app::TransparentWallAnimator* this_ptr, app::Action* on_finish)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::TransparentWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::TransparentWallAnimator* this_ptr)
} // namespace app::classes::TransparentWallAnimator
