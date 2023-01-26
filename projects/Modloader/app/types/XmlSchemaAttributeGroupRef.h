#pragma once
#include <Modloader/app/structs/XmlSchemaAttributeGroupRef.h>
#include <Modloader/app/structs/XmlSchemaAttributeGroupRef__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaAttributeGroupRef {
        inline app::XmlSchemaAttributeGroupRef__Class** type_info() {
            static app::XmlSchemaAttributeGroupRef__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaAttributeGroupRef__Class**)(modloader::win::memory::resolve_rva(0x047500D8));
            }
            return cache;
        }
        inline app::XmlSchemaAttributeGroupRef__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAttributeGroupRef__Class>(type_info(), "System.Xml.Schema", "XmlSchemaAttributeGroupRef");
        }
        inline app::XmlSchemaAttributeGroupRef* create() {
            return il2cpp::create_object<app::XmlSchemaAttributeGroupRef>(get_class());
        }
    } // namespace XmlSchemaAttributeGroupRef
} // namespace app::classes::types
