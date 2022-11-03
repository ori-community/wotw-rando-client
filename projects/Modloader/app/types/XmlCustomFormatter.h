#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlCustomFormatter {
        inline app::XmlCustomFormatter__Class** type_info = (app::XmlCustomFormatter__Class**)(modloader::win::memory::resolve_rva(0x0475F888));
        inline app::XmlCustomFormatter__Class* get_class() {
            return il2cpp::get_class<app::XmlCustomFormatter__Class>(type_info, "System.Xml.Serialization", "XmlCustomFormatter");
        }
        inline app::XmlCustomFormatter* create() {
            return il2cpp::create_object<app::XmlCustomFormatter>(get_class());
        }
    } // namespace XmlCustomFormatter
} // namespace app::classes::types
