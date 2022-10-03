#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlEventCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlEventCache__Class** type_info;
        inline app::XmlEventCache__Class* get_class() {
            return il2cpp::get_class<app::XmlEventCache__Class>(type_info, "System.Xml", "XmlEventCache");
        }
        inline app::XmlEventCache* create() {
            return il2cpp::create_object<app::XmlEventCache>(get_class());
        }
    } // namespace XmlEventCache
} // namespace app::classes::types
