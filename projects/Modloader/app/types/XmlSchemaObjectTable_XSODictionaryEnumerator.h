#pragma once
#include <Modloader/app/structs/XmlSchemaObjectTable_XSODictionaryEnumerator.h>
#include <Modloader/app/structs/XmlSchemaObjectTable_XSODictionaryEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable_XSODictionaryEnumerator {
        inline app::XmlSchemaObjectTable_XSODictionaryEnumerator__Class** type_info() {
            static app::XmlSchemaObjectTable_XSODictionaryEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaObjectTable_XSODictionaryEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04730AF8));
            }
            return cache;
        }
        inline app::XmlSchemaObjectTable_XSODictionaryEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaObjectTable_XSODictionaryEnumerator__Class>(type_info(), "System.Xml.Schema", "XmlSchemaObjectTable", "XSODictionaryEnumerator");
        }
        inline app::XmlSchemaObjectTable_XSODictionaryEnumerator* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable_XSODictionaryEnumerator>(get_class());
        }
    } // namespace XmlSchemaObjectTable_XSODictionaryEnumerator
} // namespace app::classes::types
