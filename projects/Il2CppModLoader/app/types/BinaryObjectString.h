#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryObjectString {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryObjectString__Class** type_info;
        inline app::BinaryObjectString__Class* get_class() {
            return il2cpp::get_class<app::BinaryObjectString__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectString");
        }
        inline app::BinaryObjectString* create() {
            return il2cpp::create_object<app::BinaryObjectString>(get_class());
        }
    } // namespace BinaryObjectString
} // namespace app::classes::types
