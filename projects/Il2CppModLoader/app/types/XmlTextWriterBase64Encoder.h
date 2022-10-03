#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextWriterBase64Encoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTextWriterBase64Encoder__Class** type_info;
        inline app::XmlTextWriterBase64Encoder__Class* get_class() {
            return il2cpp::get_class<app::XmlTextWriterBase64Encoder__Class>(type_info, "System.Xml", "XmlTextWriterBase64Encoder");
        }
        inline app::XmlTextWriterBase64Encoder* create() {
            return il2cpp::create_object<app::XmlTextWriterBase64Encoder>(get_class());
        }
    } // namespace XmlTextWriterBase64Encoder
} // namespace app::classes::types
