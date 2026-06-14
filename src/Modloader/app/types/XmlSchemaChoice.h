#pragma once
#include <Modloader/app/structs/XmlSchemaChoice.h>
#include <Modloader/app/structs/XmlSchemaChoice__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaChoice {
        inline app::XmlSchemaChoice__Class** type_info() {
            static app::XmlSchemaChoice__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaChoice__Class**)(modloader::win::memory::resolve_rva(0x04769DE8));
            }
            return cache;
        }
        inline app::XmlSchemaChoice__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaChoice__Class>(type_info(), "System.Xml.Schema", "XmlSchemaChoice");
        }
        inline app::XmlSchemaChoice* create() {
            return il2cpp::create_object<app::XmlSchemaChoice>(get_class());
        }
    } // namespace XmlSchemaChoice
} // namespace app::classes::types
