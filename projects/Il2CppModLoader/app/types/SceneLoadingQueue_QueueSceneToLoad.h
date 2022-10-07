#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingQueue_QueueSceneToLoad {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneLoadingQueue_QueueSceneToLoad__Class** type_info;
        inline app::SceneLoadingQueue_QueueSceneToLoad__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingQueue_QueueSceneToLoad__Class>(type_info, "", "SceneLoadingQueue", "QueueSceneToLoad");
        }
        inline app::SceneLoadingQueue_QueueSceneToLoad* create() {
            return il2cpp::create_object<app::SceneLoadingQueue_QueueSceneToLoad>(get_class());
        }
        inline app::SceneLoadingQueue_QueueSceneToLoad__Boxed* box(app::SceneLoadingQueue_QueueSceneToLoad value) {
            return il2cpp::box_value<app::SceneLoadingQueue_QueueSceneToLoad__Boxed>(get_class(), value);
        }
        inline app::SceneLoadingQueue_QueueSceneToLoad__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneLoadingQueue_QueueSceneToLoad__Array>(get_class(), size);
        }
        inline app::SceneLoadingQueue_QueueSceneToLoad__Array* create_array(const std::vector<app::SceneLoadingQueue_QueueSceneToLoad>& items) {
            return il2cpp::array_new<app::SceneLoadingQueue_QueueSceneToLoad__Array>(get_class(), items);
        }
    } // namespace SceneLoadingQueue_QueueSceneToLoad
} // namespace app::classes::types
