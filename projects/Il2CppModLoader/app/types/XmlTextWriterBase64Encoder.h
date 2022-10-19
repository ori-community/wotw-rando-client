#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextWriterBase64Encoder {
        inline app::XmlTextWriterBase64Encoder__Class** type_info = (app::XmlTextWriterBase64Encoder__Class**)(modloader::win::memory::resolve_rva(0x04700940));
        inline app::XmlTextWriterBase64Encoder__Class* get_class() {
            return il2cpp::get_class<app::XmlTextWriterBase64Encoder__Class>(type_info, "System.Xml", "XmlTextWriterBase64Encoder");
        }
        inline app::XmlTextWriterBase64Encoder* create() {
            return il2cpp::create_object<app::XmlTextWriterBase64Encoder>(get_class());
        }
    } // namespace XmlTextWriterBase64Encoder
} // namespace app::classes::types
