#pragma once
#include <Modloader/app/structs/XmlSchemaSimpleTypeList.h>
#include <Modloader/app/structs/XmlSchemaSimpleTypeList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleTypeList {
        inline app::XmlSchemaSimpleTypeList__Class** type_info() {
            static app::XmlSchemaSimpleTypeList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaSimpleTypeList__Class**)(modloader::win::memory::resolve_rva(0x04790850));
            }
            return cache;
        }
        inline app::XmlSchemaSimpleTypeList__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleTypeList__Class>(type_info(), "System.Xml.Schema", "XmlSchemaSimpleTypeList");
        }
        inline app::XmlSchemaSimpleTypeList* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleTypeList>(get_class());
        }
    } // namespace XmlSchemaSimpleTypeList
} // namespace app::classes::types
