#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNumeric10Converter {
        inline app::XmlNumeric10Converter__Class** type_info = (app::XmlNumeric10Converter__Class**)(modloader::win::memory::resolve_rva(0x04718DF8));
        inline app::XmlNumeric10Converter__Class* get_class() {
            return il2cpp::get_class<app::XmlNumeric10Converter__Class>(type_info, "System.Xml.Schema", "XmlNumeric10Converter");
        }
        inline app::XmlNumeric10Converter* create() {
            return il2cpp::create_object<app::XmlNumeric10Converter>(get_class());
        }
    } // namespace XmlNumeric10Converter
} // namespace app::classes::types
