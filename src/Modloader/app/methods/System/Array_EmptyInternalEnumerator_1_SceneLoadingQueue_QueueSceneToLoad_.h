#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_EmptyInternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad.h>

namespace app::classes::System::Array_EmptyInternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, app::Array_EmptyInternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, MoveNext, app::Array_EmptyInternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D080F0,
        app::SceneLoadingQueue_QueueSceneToLoad,
        get_Current,
        app::Array_EmptyInternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01CFF500,
        app::Object*,
        IEnumerator_get_Current,
        app::Array_EmptyInternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IEnumerator_Reset, app::Array_EmptyInternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Array_EmptyInternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CFEB90, void, cctor, )
} // namespace app::classes::System::Array_EmptyInternalEnumerator_1_SceneLoadingQueue_QueueSceneToLoad_
