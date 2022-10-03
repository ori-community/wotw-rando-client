#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlEncodedRawTextWriterIndent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlEncodedRawTextWriterIndent__Class** type_info;
        inline app::XmlEncodedRawTextWriterIndent__Class* get_class() {
            return il2cpp::get_class<app::XmlEncodedRawTextWriterIndent__Class>(type_info, "System.Xml", "XmlEncodedRawTextWriterIndent");
        }
        inline app::XmlEncodedRawTextWriterIndent* create() {
            return il2cpp::create_object<app::XmlEncodedRawTextWriterIndent>(get_class());
        }
    } // namespace XmlEncodedRawTextWriterIndent
} // namespace app::classes::types
