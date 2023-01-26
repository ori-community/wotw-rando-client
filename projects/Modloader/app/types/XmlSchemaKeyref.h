#pragma once
#include <Modloader/app/structs/XmlSchemaKeyref.h>
#include <Modloader/app/structs/XmlSchemaKeyref__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaKeyref {
        inline app::XmlSchemaKeyref__Class** type_info() {
            static app::XmlSchemaKeyref__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaKeyref__Class**)(modloader::win::memory::resolve_rva(0x047817C8));
            }
            return cache;
        }
        inline app::XmlSchemaKeyref__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaKeyref__Class>(type_info(), "System.Xml.Schema", "XmlSchemaKeyref");
        }
        inline app::XmlSchemaKeyref* create() {
            return il2cpp::create_object<app::XmlSchemaKeyref>(get_class());
        }
    } // namespace XmlSchemaKeyref
} // namespace app::classes::types
