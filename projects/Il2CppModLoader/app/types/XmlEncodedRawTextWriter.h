#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlEncodedRawTextWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlEncodedRawTextWriter__Class** type_info;
        inline app::XmlEncodedRawTextWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlEncodedRawTextWriter__Class>(type_info, "System.Xml", "XmlEncodedRawTextWriter");
        }
        inline app::XmlEncodedRawTextWriter* create() {
            return il2cpp::create_object<app::XmlEncodedRawTextWriter>(get_class());
        }
    } // namespace XmlEncodedRawTextWriter
} // namespace app::classes::types
