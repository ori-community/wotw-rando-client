#pragma once
#include <Modloader/app/structs/XmlSchemaKey.h>
#include <Modloader/app/structs/XmlSchemaKey__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaKey {
        inline app::XmlSchemaKey__Class** type_info() {
            static app::XmlSchemaKey__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaKey__Class**)(modloader::win::memory::resolve_rva(0x04791EC0));
            }
            return cache;
        }
        inline app::XmlSchemaKey__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaKey__Class>(type_info(), "System.Xml.Schema", "XmlSchemaKey");
        }
        inline app::XmlSchemaKey* create() {
            return il2cpp::create_object<app::XmlSchemaKey>(get_class());
        }
    } // namespace XmlSchemaKey
} // namespace app::classes::types
