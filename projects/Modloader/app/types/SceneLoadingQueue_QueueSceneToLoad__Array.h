#pragma once
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad__Array.h>
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingQueue_QueueSceneToLoad__Array {
        inline app::SceneLoadingQueue_QueueSceneToLoad__Array__Class** type_info() {
            static app::SceneLoadingQueue_QueueSceneToLoad__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneLoadingQueue_QueueSceneToLoad__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneLoadingQueue_QueueSceneToLoad__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingQueue_QueueSceneToLoad__Array__Class>(type_info(), "", "SceneLoadingQueue+QueueSceneToLoad[]");
        }
        inline app::SceneLoadingQueue_QueueSceneToLoad__Array* create() {
            return il2cpp::create_object<app::SceneLoadingQueue_QueueSceneToLoad__Array>(get_class());
        }
    } // namespace SceneLoadingQueue_QueueSceneToLoad__Array
} // namespace app::classes::types
