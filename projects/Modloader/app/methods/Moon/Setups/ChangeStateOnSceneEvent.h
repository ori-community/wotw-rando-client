#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChangeStateOnSceneEvent.h>
#include <Modloader/app/structs/SceneRoot.h>

namespace app::classes::Moon::Setups::ChangeStateOnSceneEvent {
    IL2CPP_REGISTER_METHOD(0x00E24CB0, void, Awake, (app::ChangeStateOnSceneEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E24E50, void, OnDestroy, (app::ChangeStateOnSceneEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E25000, void, OnSceneRootDisabled, (app::ChangeStateOnSceneEvent * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::ChangeStateOnSceneEvent * this_ptr))
} // namespace app::classes::Moon::Setups::ChangeStateOnSceneEvent
