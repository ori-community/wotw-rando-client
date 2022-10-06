#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneRoot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneRoot__Class** type_info;
        inline app::SceneRoot__Class* get_class() {
            return il2cpp::get_class<app::SceneRoot__Class>(type_info, "", "SceneRoot");
        }
        inline app::SceneRoot* create() {
            return il2cpp::create_object<app::SceneRoot>(get_class());
        }
        inline app::SceneRoot__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneRoot__Array>(get_class(), size);
        }
        inline app::SceneRoot__Array* create_array(const std::vector<app::SceneRoot*>& items) {
            return il2cpp::array_new<app::SceneRoot__Array>(get_class(), items);
        }
    } // namespace SceneRoot
} // namespace app::classes::types
