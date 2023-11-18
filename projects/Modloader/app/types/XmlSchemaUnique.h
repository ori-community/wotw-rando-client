#pragma once
#include <Modloader/app/structs/XmlSchemaUnique.h>
#include <Modloader/app/structs/XmlSchemaUnique__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaUnique {
        inline app::XmlSchemaUnique__Class** type_info() {
            static app::XmlSchemaUnique__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaUnique__Class**)(modloader::win::memory::resolve_rva(0x04777E08));
            }
            return cache;
        }
        inline app::XmlSchemaUnique__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaUnique__Class>(type_info(), "System.Xml.Schema", "XmlSchemaUnique");
        }
        inline app::XmlSchemaUnique* create() {
            return il2cpp::create_object<app::XmlSchemaUnique>(get_class());
        }
    } // namespace XmlSchemaUnique
} // namespace app::classes::types
