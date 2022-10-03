#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectManager__Class** type_info;
        inline app::ObjectManager__Class* get_class() {
            return il2cpp::get_class<app::ObjectManager__Class>(type_info, "System.Runtime.Serialization", "ObjectManager");
        }
        inline app::ObjectManager* create() {
            return il2cpp::create_object<app::ObjectManager>(get_class());
        }
    } // namespace ObjectManager
} // namespace app::classes::types
