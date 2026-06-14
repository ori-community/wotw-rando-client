#pragma once
#include <Modloader/app/structs/XmlSchemaSet.h>
#include <Modloader/app/structs/XmlSchemaSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSet {
        inline app::XmlSchemaSet__Class** type_info() {
            static app::XmlSchemaSet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaSet__Class**)(modloader::win::memory::resolve_rva(0x04758568));
            }
            return cache;
        }
        inline app::XmlSchemaSet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSet__Class>(type_info(), "System.Xml.Schema", "XmlSchemaSet");
        }
        inline app::XmlSchemaSet* create() {
            return il2cpp::create_object<app::XmlSchemaSet>(get_class());
        }
    } // namespace XmlSchemaSet
} // namespace app::classes::types
