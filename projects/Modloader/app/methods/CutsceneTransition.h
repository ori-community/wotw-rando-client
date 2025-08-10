#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CutsceneState.h>
#include <Modloader/app/structs/CutsceneTransition.h>

namespace app::classes::CutsceneTransition {
    IL2CPP_REGISTER_METHOD(0x00DBF130, void, Awake, app::CutsceneTransition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, app::CutsceneTransition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DBF1D0, void, OnDestroy, app::CutsceneTransition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::CutsceneState*, get_ParentState, app::CutsceneTransition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CutsceneTransition* this_ptr)
} // namespace app::classes::CutsceneTransition
