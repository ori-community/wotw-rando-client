#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryArray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryArray__Class** type_info;
        inline app::BinaryArray__Class* get_class() {
            return il2cpp::get_class<app::BinaryArray__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryArray");
        }
        inline app::BinaryArray* create() {
            return il2cpp::create_object<app::BinaryArray>(get_class());
        }
    } // namespace BinaryArray
} // namespace app::classes::types
