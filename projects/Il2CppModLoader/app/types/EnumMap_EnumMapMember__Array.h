#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnumMap_EnumMapMember__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnumMap_EnumMapMember__Array__Class** type_info;
        inline app::EnumMap_EnumMapMember__Array__Class* get_class() {
            return il2cpp::get_class<app::EnumMap_EnumMapMember__Array__Class>(type_info, "System.Xml.Serialization", "EnumMap+EnumMapMember[]");
        }
        inline app::EnumMap_EnumMapMember__Array* create() {
            return il2cpp::create_object<app::EnumMap_EnumMapMember__Array>(get_class());
        }
    } // namespace EnumMap_EnumMapMember__Array
} // namespace app::classes::types
