#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNumeric2Converter {
        inline app::XmlNumeric2Converter__Class** type_info = (app::XmlNumeric2Converter__Class**)(modloader::win::memory::resolve_rva(0x0472ACE8));
        inline app::XmlNumeric2Converter__Class* get_class() {
            return il2cpp::get_class<app::XmlNumeric2Converter__Class>(type_info, "System.Xml.Schema", "XmlNumeric2Converter");
        }
        inline app::XmlNumeric2Converter* create() {
            return il2cpp::create_object<app::XmlNumeric2Converter>(get_class());
        }
    } // namespace XmlNumeric2Converter
} // namespace app::classes::types
