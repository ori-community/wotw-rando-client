#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlImplementation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlImplementation__Class** type_info;
        inline app::XmlImplementation__Class* get_class() {
            return il2cpp::get_class<app::XmlImplementation__Class>(type_info, "System.Xml", "XmlImplementation");
        }
        inline app::XmlImplementation* create() {
            return il2cpp::create_object<app::XmlImplementation>(get_class());
        }
    } // namespace XmlImplementation
} // namespace app::classes::types
