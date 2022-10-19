#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSignificantWhitespace {
        inline app::XmlSignificantWhitespace__Class** type_info = (app::XmlSignificantWhitespace__Class**)(modloader::win::memory::resolve_rva(0x0476AC38));
        inline app::XmlSignificantWhitespace__Class* get_class() {
            return il2cpp::get_class<app::XmlSignificantWhitespace__Class>(type_info, "System.Xml", "XmlSignificantWhitespace");
        }
        inline app::XmlSignificantWhitespace* create() {
            return il2cpp::create_object<app::XmlSignificantWhitespace>(get_class());
        }
    } // namespace XmlSignificantWhitespace
} // namespace app::classes::types
