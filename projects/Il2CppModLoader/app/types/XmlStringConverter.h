#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlStringConverter {
        inline app::XmlStringConverter__Class** type_info = (app::XmlStringConverter__Class**)(modloader::win::memory::resolve_rva(0x04702D80));
        inline app::XmlStringConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlStringConverter__Class>(type_info, "System.Xml.Schema", "XmlStringConverter");
        }
        inline app::XmlStringConverter* create() {
            return il2cpp::create_object<app::XmlStringConverter>(get_class());
        }
    } // namespace XmlStringConverter
} // namespace app::classes::types
