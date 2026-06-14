#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad.h>

namespace app::classes::System::Array_InternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, app::Array_InternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad___Boxed* this_ptr, app::Array* array)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Array_InternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, app::Array_InternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001AFE00,
        app::SceneLoadingQueue_QueueSceneToLoad,
        get_Current,
        app::Array_InternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, app::Array_InternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001AFE30,
        app::Object*,
        IEnumerator_get_Current,
        app::Array_InternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad___Boxed* this_ptr
    )
} // namespace app::classes::System::Array_InternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad_
