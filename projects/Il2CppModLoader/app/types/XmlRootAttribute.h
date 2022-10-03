#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlRootAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlRootAttribute__Class** type_info;
        inline app::XmlRootAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlRootAttribute__Class>(type_info, "System.Xml.Serialization", "XmlRootAttribute");
        }
        inline app::XmlRootAttribute* create() {
            return il2cpp::create_object<app::XmlRootAttribute>(get_class());
        }
    } // namespace XmlRootAttribute
} // namespace app::classes::types
