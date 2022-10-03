#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlRawWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlRawWriter__Class** type_info;
        inline app::XmlRawWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlRawWriter__Class>(type_info, "System.Xml", "XmlRawWriter");
        }
        inline app::XmlRawWriter* create() {
            return il2cpp::create_object<app::XmlRawWriter>(get_class());
        }
    } // namespace XmlRawWriter
} // namespace app::classes::types
