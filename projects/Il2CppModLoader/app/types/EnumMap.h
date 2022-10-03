#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnumMap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnumMap__Class** type_info;
        inline app::EnumMap__Class* get_class() {
            return il2cpp::get_class<app::EnumMap__Class>(type_info, "System.Xml.Serialization", "EnumMap");
        }
        inline app::EnumMap* create() {
            return il2cpp::create_object<app::EnumMap>(get_class());
        }
    } // namespace EnumMap
} // namespace app::classes::types
