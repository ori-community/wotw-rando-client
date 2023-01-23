#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSchemaCollectionEnumerator__Class.h>
#include <Modloader/app/structs/XmlSchemaCollectionEnumerator.h>

namespace app::classes::types {
    namespace XmlSchemaCollectionEnumerator {
        inline app::XmlSchemaCollectionEnumerator__Class** type_info = (app::XmlSchemaCollectionEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0478B500));
        inline app::XmlSchemaCollectionEnumerator__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaCollectionEnumerator__Class>(type_info, "System.Xml.Schema", "XmlSchemaCollectionEnumerator");
        }
        inline app::XmlSchemaCollectionEnumerator* create() {
            return il2cpp::create_object<app::XmlSchemaCollectionEnumerator>(get_class());
        }
    } // namespace XmlSchemaCollectionEnumerator
} // namespace app::classes::types
