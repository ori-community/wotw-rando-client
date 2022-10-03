#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryCompatibility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryCompatibility__Class** type_info;
        inline app::BinaryCompatibility__Class* get_class() {
            return il2cpp::get_class<app::BinaryCompatibility__Class>(type_info, "System.Runtime.Versioning", "BinaryCompatibility");
        }
        inline app::BinaryCompatibility* create() {
            return il2cpp::create_object<app::BinaryCompatibility>(get_class());
        }
    } // namespace BinaryCompatibility
} // namespace app::classes::types
