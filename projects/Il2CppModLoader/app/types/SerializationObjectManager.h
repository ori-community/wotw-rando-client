#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationObjectManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializationObjectManager__Class** type_info;
        inline app::SerializationObjectManager__Class* get_class() {
            return il2cpp::get_class<app::SerializationObjectManager__Class>(type_info, "System.Runtime.Serialization", "SerializationObjectManager");
        }
        inline app::SerializationObjectManager* create() {
            return il2cpp::create_object<app::SerializationObjectManager>(get_class());
        }
    } // namespace SerializationObjectManager
} // namespace app::classes::types
