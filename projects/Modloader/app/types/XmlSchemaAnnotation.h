#pragma once
#include <Modloader/app/structs/XmlSchemaAnnotation.h>
#include <Modloader/app/structs/XmlSchemaAnnotation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaAnnotation {
        inline app::XmlSchemaAnnotation__Class** type_info() {
            static app::XmlSchemaAnnotation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaAnnotation__Class**)(modloader::win::memory::resolve_rva(0x04752FE0));
            }
            return cache;
        }
        inline app::XmlSchemaAnnotation__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAnnotation__Class>(type_info(), "System.Xml.Schema", "XmlSchemaAnnotation");
        }
        inline app::XmlSchemaAnnotation* create() {
            return il2cpp::create_object<app::XmlSchemaAnnotation>(get_class());
        }
    } // namespace XmlSchemaAnnotation
} // namespace app::classes::types
