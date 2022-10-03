#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlCustomFormatter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlCustomFormatter__Class** type_info;
        inline app::XmlCustomFormatter__Class* get_class() {
            return il2cpp::get_class<app::XmlCustomFormatter__Class>(type_info, "System.Xml.Serialization", "XmlCustomFormatter");
        }
        inline app::XmlCustomFormatter* create() {
            return il2cpp::create_object<app::XmlCustomFormatter>(get_class());
        }
    } // namespace XmlCustomFormatter
} // namespace app::classes::types
