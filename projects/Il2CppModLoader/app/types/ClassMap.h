#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClassMap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClassMap__Class** type_info;
        inline app::ClassMap__Class* get_class() {
            return il2cpp::get_class<app::ClassMap__Class>(type_info, "System.Xml.Serialization", "ClassMap");
        }
        inline app::ClassMap* create() {
            return il2cpp::create_object<app::ClassMap>(get_class());
        }
    } // namespace ClassMap
} // namespace app::classes::types
