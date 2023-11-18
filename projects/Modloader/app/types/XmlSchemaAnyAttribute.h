#pragma once
#include <Modloader/app/structs/XmlSchemaAnyAttribute.h>
#include <Modloader/app/structs/XmlSchemaAnyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaAnyAttribute {
        inline app::XmlSchemaAnyAttribute__Class** type_info() {
            static app::XmlSchemaAnyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaAnyAttribute__Class**)(modloader::win::memory::resolve_rva(0x04791120));
            }
            return cache;
        }
        inline app::XmlSchemaAnyAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAnyAttribute__Class>(type_info(), "System.Xml.Schema", "XmlSchemaAnyAttribute");
        }
        inline app::XmlSchemaAnyAttribute* create() {
            return il2cpp::create_object<app::XmlSchemaAnyAttribute>(get_class());
        }
    } // namespace XmlSchemaAnyAttribute
} // namespace app::classes::types
