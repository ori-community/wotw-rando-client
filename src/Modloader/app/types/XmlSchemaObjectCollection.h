#pragma once
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaObjectCollection {
        inline app::XmlSchemaObjectCollection__Class** type_info() {
            static app::XmlSchemaObjectCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaObjectCollection__Class**)(modloader::win::memory::resolve_rva(0x0471E350));
            }
            return cache;
        }
        inline app::XmlSchemaObjectCollection__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaObjectCollection__Class>(type_info(), "System.Xml.Schema", "XmlSchemaObjectCollection");
        }
        inline app::XmlSchemaObjectCollection* create() {
            return il2cpp::create_object<app::XmlSchemaObjectCollection>(get_class());
        }
    } // namespace XmlSchemaObjectCollection
} // namespace app::classes::types
