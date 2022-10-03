#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryObjectWithMap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryObjectWithMap__Class** type_info;
        inline app::BinaryObjectWithMap__Class* get_class() {
            return il2cpp::get_class<app::BinaryObjectWithMap__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMap");
        }
        inline app::BinaryObjectWithMap* create() {
            return il2cpp::create_object<app::BinaryObjectWithMap>(get_class());
        }
    } // namespace BinaryObjectWithMap
} // namespace app::classes::types
