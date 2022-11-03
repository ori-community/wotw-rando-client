#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlBaseConverter {
        inline app::XmlBaseConverter__Class** type_info = (app::XmlBaseConverter__Class**)(modloader::win::memory::resolve_rva(0x04774928));
        inline app::XmlBaseConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlBaseConverter__Class>(type_info, "System.Xml.Schema", "XmlBaseConverter");
        }
        inline app::XmlBaseConverter* create() {
            return il2cpp::create_object<app::XmlBaseConverter>(get_class());
        }
    } // namespace XmlBaseConverter
} // namespace app::classes::types
