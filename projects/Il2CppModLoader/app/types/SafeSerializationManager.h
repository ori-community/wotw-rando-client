#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SafeSerializationManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SafeSerializationManager__Class** type_info;
        inline app::SafeSerializationManager__Class* get_class() {
            return il2cpp::get_class<app::SafeSerializationManager__Class>(type_info, "System.Runtime.Serialization", "SafeSerializationManager");
        }
        inline app::SafeSerializationManager* create() {
            return il2cpp::create_object<app::SafeSerializationManager>(get_class());
        }
    } // namespace SafeSerializationManager
} // namespace app::classes::types
