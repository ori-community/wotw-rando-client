#pragma once
#include <Modloader/app/structs/XmlSchemaSimpleContent.h>
#include <Modloader/app/structs/XmlSchemaSimpleContent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleContent {
        inline app::XmlSchemaSimpleContent__Class** type_info() {
            static app::XmlSchemaSimpleContent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaSimpleContent__Class**)(modloader::win::memory::resolve_rva(0x04782390));
            }
            return cache;
        }
        inline app::XmlSchemaSimpleContent__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleContent__Class>(type_info(), "System.Xml.Schema", "XmlSchemaSimpleContent");
        }
        inline app::XmlSchemaSimpleContent* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleContent>(get_class());
        }
    } // namespace XmlSchemaSimpleContent
} // namespace app::classes::types
