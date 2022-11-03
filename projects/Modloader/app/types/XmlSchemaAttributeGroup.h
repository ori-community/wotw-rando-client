#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaAttributeGroup {
        inline app::XmlSchemaAttributeGroup__Class** type_info = (app::XmlSchemaAttributeGroup__Class**)(modloader::win::memory::resolve_rva(0x04798D18));
        inline app::XmlSchemaAttributeGroup__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAttributeGroup__Class>(type_info, "System.Xml.Schema", "XmlSchemaAttributeGroup");
        }
        inline app::XmlSchemaAttributeGroup* create() {
            return il2cpp::create_object<app::XmlSchemaAttributeGroup>(get_class());
        }
    } // namespace XmlSchemaAttributeGroup
} // namespace app::classes::types
