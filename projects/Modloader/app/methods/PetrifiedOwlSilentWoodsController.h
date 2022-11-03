#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PetrifiedOwlSilentWoodsController {
    IL2CPP_REGISTER_METHOD(0x00BDCCA0, bool, get_IsCompleted, (app::PetrifiedOwlSilentWoodsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E6DD0, void, Awake, (app::PetrifiedOwlSilentWoodsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E6F80, void, AssureStatesCreated, (app::PetrifiedOwlSilentWoodsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E76A0, void, OnDestroy, (app::PetrifiedOwlSilentWoodsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E7840, void, OnSceneRootPostEnable, (app::PetrifiedOwlSilentWoodsController * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (app::PetrifiedOwlSilentWoodsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E7850, void, OnDisable, (app::PetrifiedOwlSilentWoodsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E7840, void, OnPostRestoreCheckpoint, (app::PetrifiedOwlSilentWoodsController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478DBB8, PetrifiedOwlSilentWoodsController_OnPostRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E7880, void, InitializeSequence, (app::PetrifiedOwlSilentWoodsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E7850, void, StopSequence, (app::PetrifiedOwlSilentWoodsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E7900, void, FixedUpdate, (app::PetrifiedOwlSilentWoodsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E7970, void, ctor, (app::PetrifiedOwlSilentWoodsController * this_ptr))
} // namespace app::classes::PetrifiedOwlSilentWoodsController
