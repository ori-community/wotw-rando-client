#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryFormatter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryFormatter__Class** type_info;
        inline app::BinaryFormatter__Class* get_class() {
            return il2cpp::get_class<app::BinaryFormatter__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter");
        }
        inline app::BinaryFormatter* create() {
            return il2cpp::create_object<app::BinaryFormatter>(get_class());
        }
    } // namespace BinaryFormatter
} // namespace app::classes::types
