#pragma once
#include <Modloader/app/structs/XmlSchemaNotation.h>
#include <Modloader/app/structs/XmlSchemaNotation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaNotation {
        inline app::XmlSchemaNotation__Class** type_info() {
            static app::XmlSchemaNotation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaNotation__Class**)(modloader::win::memory::resolve_rva(0x04710CA0));
            }
            return cache;
        }
        inline app::XmlSchemaNotation__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaNotation__Class>(type_info(), "System.Xml.Schema", "XmlSchemaNotation");
        }
        inline app::XmlSchemaNotation* create() {
            return il2cpp::create_object<app::XmlSchemaNotation>(get_class());
        }
    } // namespace XmlSchemaNotation
} // namespace app::classes::types
