#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListMap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListMap__Class** type_info;
        inline app::ListMap__Class* get_class() {
            return il2cpp::get_class<app::ListMap__Class>(type_info, "System.Xml.Serialization", "ListMap");
        }
        inline app::ListMap* create() {
            return il2cpp::create_object<app::ListMap>(get_class());
        }
    } // namespace ListMap
} // namespace app::classes::types
