#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::InstantLoadScenesController {
    IL2CPP_REGISTER_METHOD(0x0062A7A0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0062A820, void, Awake, (app::InstantLoadScenesController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062A8B0, void, OnDestroy, (app::InstantLoadScenesController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062A990, app::ScenesManager *, get_ScenesManager, (app::InstantLoadScenesController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsLoading, (app::InstantLoadScenesController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062AA10, void, FreezeIfLoadingScenes, (app::InstantLoadScenesController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062AB30, void, FreezeIfNotFrozen, (app::InstantLoadScenesController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062AC10, void, UnfreezeIfFrozen, (app::InstantLoadScenesController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062ACF0, void, LoadScenesAtPosition, (app::InstantLoadScenesController * this_ptr, app::Action * action, bool async, bool point_sample))
    IL2CPP_REGISTER_METHOD(0x0062B230, void, LogState, (app::InstantLoadScenesController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062B3D0, void, OnScenesManagerFixedUpdate, (app::InstantLoadScenesController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_LockFinishingLoading, (app::InstantLoadScenesController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062B7C0, void, set_LockFinishingLoading, (app::InstantLoadScenesController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0062B8A0, void, CompleteLoading, (app::InstantLoadScenesController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795AC8, InstantLoadScenesController_CompleteLoading__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0062BD30, void, OnGameReset, (app::InstantLoadScenesController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::InstantLoadScenesController * this_ptr))
}
