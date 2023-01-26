#pragma once
#include <Modloader/app/structs/XmlSchemaObjectTable_XSOEnumerator.h>
#include <Modloader/app/structs/XmlSchemaObjectTable_XSOEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable_XSOEnumerator {
        inline app::XmlSchemaObjectTable_XSOEnumerator__Class** type_info() {
            static app::XmlSchemaObjectTable_XSOEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaObjectTable_XSOEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0472A838));
            }
            return cache;
        }
        inline app::XmlSchemaObjectTable_XSOEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaObjectTable_XSOEnumerator__Class>(type_info(), "System.Xml.Schema", "XmlSchemaObjectTable", "XSOEnumerator");
        }
        inline app::XmlSchemaObjectTable_XSOEnumerator* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable_XSOEnumerator>(get_class());
        }
    } // namespace XmlSchemaObjectTable_XSOEnumerator
} // namespace app::classes::types
