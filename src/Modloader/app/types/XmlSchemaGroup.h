#pragma once
#include <Modloader/app/structs/XmlSchemaGroup.h>
#include <Modloader/app/structs/XmlSchemaGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaGroup {
        inline app::XmlSchemaGroup__Class** type_info() {
            static app::XmlSchemaGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaGroup__Class**)(modloader::win::memory::resolve_rva(0x047281B8));
            }
            return cache;
        }
        inline app::XmlSchemaGroup__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaGroup__Class>(type_info(), "System.Xml.Schema", "XmlSchemaGroup");
        }
        inline app::XmlSchemaGroup* create() {
            return il2cpp::create_object<app::XmlSchemaGroup>(get_class());
        }
    } // namespace XmlSchemaGroup
} // namespace app::classes::types
