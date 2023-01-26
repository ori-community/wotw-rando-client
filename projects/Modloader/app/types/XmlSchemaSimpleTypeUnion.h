#pragma once
#include <Modloader/app/structs/XmlSchemaSimpleTypeUnion.h>
#include <Modloader/app/structs/XmlSchemaSimpleTypeUnion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleTypeUnion {
        inline app::XmlSchemaSimpleTypeUnion__Class** type_info() {
            static app::XmlSchemaSimpleTypeUnion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaSimpleTypeUnion__Class**)(modloader::win::memory::resolve_rva(0x047404B0));
            }
            return cache;
        }
        inline app::XmlSchemaSimpleTypeUnion__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleTypeUnion__Class>(type_info(), "System.Xml.Schema", "XmlSchemaSimpleTypeUnion");
        }
        inline app::XmlSchemaSimpleTypeUnion* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleTypeUnion>(get_class());
        }
    } // namespace XmlSchemaSimpleTypeUnion
} // namespace app::classes::types
