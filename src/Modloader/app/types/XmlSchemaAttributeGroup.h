#pragma once
#include <Modloader/app/structs/XmlSchemaAttributeGroup.h>
#include <Modloader/app/structs/XmlSchemaAttributeGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaAttributeGroup {
        inline app::XmlSchemaAttributeGroup__Class** type_info() {
            static app::XmlSchemaAttributeGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaAttributeGroup__Class**)(modloader::win::memory::resolve_rva(0x04798D18));
            }
            return cache;
        }
        inline app::XmlSchemaAttributeGroup__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAttributeGroup__Class>(type_info(), "System.Xml.Schema", "XmlSchemaAttributeGroup");
        }
        inline app::XmlSchemaAttributeGroup* create() {
            return il2cpp::create_object<app::XmlSchemaAttributeGroup>(get_class());
        }
    } // namespace XmlSchemaAttributeGroup
} // namespace app::classes::types
