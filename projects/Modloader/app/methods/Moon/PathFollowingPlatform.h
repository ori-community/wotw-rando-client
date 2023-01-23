#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/PathFollowingPlatform.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>

namespace app::classes::Moon::PathFollowingPlatform {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C32710, float, get_PlatformStartPosition, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C327F0, void, Apply, (app::PathFollowingPlatform * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00C32A40, app::IUberState__Array*, get_AffectingUberStates, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C32AC0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C32C30, void, Awake, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C32CF0, void, OnDestroy, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C32DB0, void, OnUpdate, (app::PathFollowingPlatform * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00C32FD0, void, StopTimeline, (app::PathFollowingPlatform * this_ptr, app::MoonTimeline* moon_timeline))
    IL2CPP_REGISTER_METHOD(0x00C33090, void, StartTimeline, (app::PathFollowingPlatform * this_ptr, app::MoonTimeline* moon_timeline))
    IL2CPP_REGISTER_METHOD(0x00C33150, bool, IsPlayerGrounded, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C332C0, void, ctor, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_1, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_2, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_3, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_4, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_5, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_6, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_7, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_8, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_9, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_10, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_11, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_12, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_13, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_14, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_15, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_16, (app::PathFollowingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonTypeResolver*, GetResolverForType_17, (app::PathFollowingPlatform * this_ptr))
} // namespace app::classes::Moon::PathFollowingPlatform
