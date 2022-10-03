#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingQueue_QueueSceneToLoad__Array {
        namespace {
            app::SceneLoadingQueue_QueueSceneToLoad__Array__Class* type_info_ref = nullptr;
        }
        app::SceneLoadingQueue_QueueSceneToLoad__Array__Class** type_info = &type_info_ref;
        inline app::SceneLoadingQueue_QueueSceneToLoad__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingQueue_QueueSceneToLoad__Array__Class>(type_info, "", "SceneLoadingQueue+QueueSceneToLoad[]");
        }
        inline app::SceneLoadingQueue_QueueSceneToLoad__Array* create() {
            return il2cpp::create_object<app::SceneLoadingQueue_QueueSceneToLoad__Array>(get_class());
        }
    } // namespace SceneLoadingQueue_QueueSceneToLoad__Array
} // namespace app::classes::types
