#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingQueue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneLoadingQueue__Class** type_info;
        inline app::SceneLoadingQueue__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingQueue__Class>(type_info, "", "SceneLoadingQueue");
        }
        inline app::SceneLoadingQueue* create() {
            return il2cpp::create_object<app::SceneLoadingQueue>(get_class());
        }
    } // namespace SceneLoadingQueue
} // namespace app::classes::types
