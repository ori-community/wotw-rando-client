#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlUrlResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlUrlResolver__Class** type_info;
        inline app::XmlUrlResolver__Class* get_class() {
            return il2cpp::get_class<app::XmlUrlResolver__Class>(type_info, "System.Xml", "XmlUrlResolver");
        }
        inline app::XmlUrlResolver* create() {
            return il2cpp::create_object<app::XmlUrlResolver>(get_class());
        }
    } // namespace XmlUrlResolver
} // namespace app::classes::types
