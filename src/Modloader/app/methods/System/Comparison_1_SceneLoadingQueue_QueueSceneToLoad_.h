#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Comparison_1_SceneLoadingQueue_QueueSceneToLoad_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad.h>

namespace app::classes::System::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02B847C0,
        int32_t,
        Invoke,
        app::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr,
        app::SceneLoadingQueue_QueueSceneToLoad x,
        app::SceneLoadingQueue_QueueSceneToLoad y
    )
    IL2CPP_REGISTER_METHOD(
        0x02C7B920,
        app::IAsyncResult*,
        BeginInvoke,
        app::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr,
        app::SceneLoadingQueue_QueueSceneToLoad x,
        app::SceneLoadingQueue_QueueSceneToLoad y,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, app::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_
