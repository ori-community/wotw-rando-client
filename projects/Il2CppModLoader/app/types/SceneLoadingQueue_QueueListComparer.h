#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingQueue_QueueListComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneLoadingQueue_QueueListComparer__Class** type_info;
        inline app::SceneLoadingQueue_QueueListComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingQueue_QueueListComparer__Class>(type_info, "", "SceneLoadingQueue", "QueueListComparer");
        }
        inline app::SceneLoadingQueue_QueueListComparer* create() {
            return il2cpp::create_object<app::SceneLoadingQueue_QueueListComparer>(get_class());
        }
    } // namespace SceneLoadingQueue_QueueListComparer
} // namespace app::classes::types
