#pragma once
#include <Modloader/app/structs/XmlSchemaCollection.h>
#include <Modloader/app/structs/XmlSchemaCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaCollection {
        inline app::XmlSchemaCollection__Class** type_info() {
            static app::XmlSchemaCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaCollection__Class**)(modloader::win::memory::resolve_rva(0x04734258));
            }
            return cache;
        }
        inline app::XmlSchemaCollection__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaCollection__Class>(type_info(), "System.Xml.Schema", "XmlSchemaCollection");
        }
        inline app::XmlSchemaCollection* create() {
            return il2cpp::create_object<app::XmlSchemaCollection>(get_class());
        }
    } // namespace XmlSchemaCollection
} // namespace app::classes::types
