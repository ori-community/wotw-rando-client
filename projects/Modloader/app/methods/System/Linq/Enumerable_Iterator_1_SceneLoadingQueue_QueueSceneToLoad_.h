#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_Iterator_1_SceneLoadingQueue_QueueSceneToLoad_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_SceneLoadingQueue_QueueSceneToLoad_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad.h>

namespace app::classes::System::Linq::Enumerable_Iterator_1_SceneLoadingQueue_QueueSceneToLoad_ {
    IL2CPP_REGISTER_METHOD(0x02980400, void, ctor, app::Enumerable_Iterator_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x009EB5D0,
        app::SceneLoadingQueue_QueueSceneToLoad,
        get_Current,
        app::Enumerable_Iterator_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0298B3B0, void, Dispose, app::Enumerable_Iterator_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02980540,
        app::IEnumerator_1_SceneLoadingQueue_QueueSceneToLoad_*,
        GetEnumerator,
        app::Enumerable_Iterator_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0298B3D0, app::Object*, IEnumerator_get_Current, app::Enumerable_Iterator_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225B610, app::IEnumerator*, IEnumerable_GetEnumerator, app::Enumerable_Iterator_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0298B450, void, IEnumerator_Reset, app::Enumerable_Iterator_1_SceneLoadingQueue_QueueSceneToLoad_* this_ptr)
} // namespace app::classes::System::Linq::Enumerable_Iterator_1_SceneLoadingQueue_QueueSceneToLoad_
