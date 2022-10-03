#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlWriterSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlWriterSettings__Class** type_info;
        inline app::XmlWriterSettings__Class* get_class() {
            return il2cpp::get_class<app::XmlWriterSettings__Class>(type_info, "System.Xml", "XmlWriterSettings");
        }
        inline app::XmlWriterSettings* create() {
            return il2cpp::create_object<app::XmlWriterSettings>(get_class());
        }
    } // namespace XmlWriterSettings
} // namespace app::classes::types
