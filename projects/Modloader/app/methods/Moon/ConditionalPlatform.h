#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/ConditionalPlatform.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::Moon::ConditionalPlatform {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::ConditionalPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC8D60, void, Awake, (app::ConditionalPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::ConditionalPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC8E20, void, Apply, (app::ConditionalPlatform * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IUberState__Array*, get_AffectingUberStates, (app::ConditionalPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC8EF0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::ConditionalPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC9040, void, OnDestroy, (app::ConditionalPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC9100, void, OnUpdate, (app::ConditionalPlatform * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00CC92E0, void, StopTimeline, (app::ConditionalPlatform * this_ptr, app::MoonTimeline* moon_timeline))
    IL2CPP_REGISTER_METHOD(0x00CC93A0, void, StartTimeline, (app::ConditionalPlatform * this_ptr, app::MoonTimeline* moon_timeline))
    IL2CPP_REGISTER_METHOD(0x00CC9460, bool, IsPlayerGrounded, (app::ConditionalPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008223A0, void, ctor, (app::ConditionalPlatform * this_ptr))
} // namespace app::classes::Moon::ConditionalPlatform
