#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad.h>
#include <Modloader/app/structs/SceneLoadingQueue_c_DisplayClass12_0.h>

namespace app::classes::SceneLoadingQueue___c__DisplayClass12_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SceneLoadingQueue_c_DisplayClass12_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00BA8750,
        bool,
        _IsSceneQueued_b__0,
        app::SceneLoadingQueue_c_DisplayClass12_0* this_ptr,
        app::SceneLoadingQueue_QueueSceneToLoad x
    )
} // namespace app::classes::SceneLoadingQueue___c__DisplayClass12_0
