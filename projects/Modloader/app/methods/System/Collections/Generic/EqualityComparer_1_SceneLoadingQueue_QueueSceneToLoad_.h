#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_SceneLoadingQueue_QueueSceneToLoad_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad.h>
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_SceneLoadingQueue_QueueSceneToLoad_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_SceneLoadingQueue_QueueSceneToLoad_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02D911D0, app::EqualityComparer_1_SceneLoadingQueue_QueueSceneToLoad_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02B49B00,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr,
        app::SceneLoadingQueue_QueueSceneToLoad__Array* array,
        app::SceneLoadingQueue_QueueSceneToLoad value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B49BF0,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr,
        app::SceneLoadingQueue_QueueSceneToLoad__Array* array,
        app::SceneLoadingQueue_QueueSceneToLoad value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B49CE0,
        int32_t,
        IEqualityComparer_GetHashCode,
        app::EqualityComparer_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02B49DE0,
        bool,
        IEqualityComparer_Equals,
        app::EqualityComparer_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_SceneLoadingQueue_QueueSceneToLoad_
