#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaSet {
        inline app::XmlSchemaSet__Class** type_info = (app::XmlSchemaSet__Class**)(modloader::win::memory::resolve_rva(0x04758568));
        inline app::XmlSchemaSet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSet__Class>(type_info, "System.Xml.Schema", "XmlSchemaSet");
        }
        inline app::XmlSchemaSet* create() {
            return il2cpp::create_object<app::XmlSchemaSet>(get_class());
        }
    } // namespace XmlSchemaSet
} // namespace app::classes::types
