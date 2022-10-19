#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlWriterSettings {
        inline app::XmlWriterSettings__Class** type_info = (app::XmlWriterSettings__Class**)(modloader::win::memory::resolve_rva(0x04740F80));
        inline app::XmlWriterSettings__Class* get_class() {
            return il2cpp::get_class<app::XmlWriterSettings__Class>(type_info, "System.Xml", "XmlWriterSettings");
        }
        inline app::XmlWriterSettings* create() {
            return il2cpp::create_object<app::XmlWriterSettings>(get_class());
        }
    } // namespace XmlWriterSettings
} // namespace app::classes::types
