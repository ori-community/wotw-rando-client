#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNotation {
        inline app::XmlNotation__Class** type_info = (app::XmlNotation__Class**)(modloader::win::memory::resolve_rva(0x04708C20));
        inline app::XmlNotation__Class* get_class() {
            return il2cpp::get_class<app::XmlNotation__Class>(type_info, "System.Xml", "XmlNotation");
        }
        inline app::XmlNotation* create() {
            return il2cpp::create_object<app::XmlNotation>(get_class());
        }
    } // namespace XmlNotation
} // namespace app::classes::types
