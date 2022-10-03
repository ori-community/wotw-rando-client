#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlRawWriterBase64Encoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlRawWriterBase64Encoder__Class** type_info;
        inline app::XmlRawWriterBase64Encoder__Class* get_class() {
            return il2cpp::get_class<app::XmlRawWriterBase64Encoder__Class>(type_info, "System.Xml", "XmlRawWriterBase64Encoder");
        }
        inline app::XmlRawWriterBase64Encoder* create() {
            return il2cpp::create_object<app::XmlRawWriterBase64Encoder>(get_class());
        }
    } // namespace XmlRawWriterBase64Encoder
} // namespace app::classes::types
