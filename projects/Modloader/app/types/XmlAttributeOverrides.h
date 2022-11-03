#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAttributeOverrides {
        inline app::XmlAttributeOverrides__Class** type_info = (app::XmlAttributeOverrides__Class**)(modloader::win::memory::resolve_rva(0x047328F0));
        inline app::XmlAttributeOverrides__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributeOverrides__Class>(type_info, "System.Xml.Serialization", "XmlAttributeOverrides");
        }
        inline app::XmlAttributeOverrides* create() {
            return il2cpp::create_object<app::XmlAttributeOverrides>(get_class());
        }
    } // namespace XmlAttributeOverrides
} // namespace app::classes::types
