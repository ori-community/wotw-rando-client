#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeepScenesLoaded.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::Moon::Timeline::KeepScenesLoaded {
    IL2CPP_REGISTER_METHOD(0x00772AB0, void, OnEnable, (app::KeepScenesLoaded * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00772C80, void, OnDisable, (app::KeepScenesLoaded * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00772E50, void, OnDestroy, (app::KeepScenesLoaded * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00772E60, void, PreloadScenes, (app::KeepScenesLoaded * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00773010, void, AllowUnloading, (app::KeepScenesLoaded * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00773150, void, UpdatePreloadState, (app::KeepScenesLoaded * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00773150, void, Apply, (app::KeepScenesLoaded * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::KeepScenesLoaded * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007731B0, app::IUberState__Array*, get_AffectingUberStates, (app::KeepScenesLoaded * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::KeepScenesLoaded * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007732B0, void, ctor, (app::KeepScenesLoaded * this_ptr))
} // namespace app::classes::Moon::Timeline::KeepScenesLoaded
