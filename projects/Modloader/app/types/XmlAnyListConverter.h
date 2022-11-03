#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAnyListConverter {
        inline app::XmlAnyListConverter__Class** type_info = (app::XmlAnyListConverter__Class**)(modloader::win::memory::resolve_rva(0x04737EC0));
        inline app::XmlAnyListConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlAnyListConverter__Class>(type_info, "System.Xml.Schema", "XmlAnyListConverter");
        }
        inline app::XmlAnyListConverter* create() {
            return il2cpp::create_object<app::XmlAnyListConverter>(get_class());
        }
    } // namespace XmlAnyListConverter
} // namespace app::classes::types
