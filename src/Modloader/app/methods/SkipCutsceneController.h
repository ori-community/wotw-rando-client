#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ISkipCutscene.h>
#include <Modloader/app/structs/SceneManagerScene.h>
#include <Modloader/app/structs/SkipCutsceneController.h>

namespace app::classes::SkipCutsceneController {
    IL2CPP_REGISTER_METHOD(0x006C3090, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x006C3110, void, RegisterCutsceneSkip, app::SkipCutsceneController* this_ptr, app::ISkipCutscene* skip)
    IL2CPP_REGISTER_METHOD(0x006C32E0, void, UnregisterCutsceneSkip, app::SkipCutsceneController* this_ptr, app::ISkipCutscene* skip)
    IL2CPP_REGISTER_METHOD(0x006C33A0, app::SceneManagerScene*, get_PrologueMaster, app::SkipCutsceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C3570, app::SceneManagerScene*, get_KuFlyAway, app::SkipCutsceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C36B0, bool, get_SkippingAvailable, app::SkipCutsceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C38D0, bool, get_HasValidSkip, app::SkipCutsceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_BackingOutAvailable, app::SkipCutsceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C39D0, void, Awake, app::SkipCutsceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C3B70, void, OnDestroy, app::SkipCutsceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C3D50, void, OnGameReset, app::SkipCutsceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C3D50, void, Cleanup, app::SkipCutsceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C3D80, void, SkipPrologue, app::SkipCutsceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C43E0, bool, ReadyToSkip, app::SkipCutsceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C4A40, void, SkipCutscene, app::SkipCutsceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C4E20, void, PrewarmSkip, app::SkipCutsceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C4F50, void, ctor, app::SkipCutsceneController* this_ptr)
} // namespace app::classes::SkipCutsceneController
