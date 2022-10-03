#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAttribute__Class** type_info;
        inline app::XmlAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlAttribute__Class>(type_info, "System.Xml", "XmlAttribute");
        }
        inline app::XmlAttribute* create() {
            return il2cpp::create_object<app::XmlAttribute>(get_class());
        }
        inline app::XmlAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlAttribute__Array>(get_class(), size);
        }
    } // namespace XmlAttribute
} // namespace app::classes::types
