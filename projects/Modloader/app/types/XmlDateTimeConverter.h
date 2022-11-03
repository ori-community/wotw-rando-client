#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlDateTimeConverter {
        inline app::XmlDateTimeConverter__Class** type_info = (app::XmlDateTimeConverter__Class**)(modloader::win::memory::resolve_rva(0x0472ED78));
        inline app::XmlDateTimeConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlDateTimeConverter__Class>(type_info, "System.Xml.Schema", "XmlDateTimeConverter");
        }
        inline app::XmlDateTimeConverter* create() {
            return il2cpp::create_object<app::XmlDateTimeConverter>(get_class());
        }
    } // namespace XmlDateTimeConverter
} // namespace app::classes::types
