#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameObjectReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameObjectReference__Class** type_info;
        inline app::GameObjectReference__Class* get_class() {
            return il2cpp::get_class<app::GameObjectReference__Class>(type_info, "", "GameObjectReference");
        }
        inline app::GameObjectReference* create() {
            return il2cpp::create_object<app::GameObjectReference>(get_class());
        }
    } // namespace GameObjectReference
} // namespace app::classes::types
