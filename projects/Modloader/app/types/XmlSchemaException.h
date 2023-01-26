#pragma once
#include <Modloader/app/structs/XmlSchemaException.h>
#include <Modloader/app/structs/XmlSchemaException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaException {
        inline app::XmlSchemaException__Class** type_info() {
            static app::XmlSchemaException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaException__Class**)(modloader::win::memory::resolve_rva(0x04704300));
            }
            return cache;
        }
        inline app::XmlSchemaException__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaException__Class>(type_info(), "System.Xml.Schema", "XmlSchemaException");
        }
        inline app::XmlSchemaException* create() {
            return il2cpp::create_object<app::XmlSchemaException>(get_class());
        }
    } // namespace XmlSchemaException
} // namespace app::classes::types
