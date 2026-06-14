#pragma once
#include <Modloader/app/structs/XmlSchemaSimpleContentRestriction.h>
#include <Modloader/app/structs/XmlSchemaSimpleContentRestriction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleContentRestriction {
        inline app::XmlSchemaSimpleContentRestriction__Class** type_info() {
            static app::XmlSchemaSimpleContentRestriction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaSimpleContentRestriction__Class**)(modloader::win::memory::resolve_rva(0x0477A2C8));
            }
            return cache;
        }
        inline app::XmlSchemaSimpleContentRestriction__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleContentRestriction__Class>(type_info(), "System.Xml.Schema", "XmlSchemaSimpleContentRestriction");
        }
        inline app::XmlSchemaSimpleContentRestriction* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleContentRestriction>(get_class());
        }
    } // namespace XmlSchemaSimpleContentRestriction
} // namespace app::classes::types
