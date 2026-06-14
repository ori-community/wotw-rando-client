#pragma once
#include <Modloader/app/structs/XmlSchemaObjectTable.h>
#include <Modloader/app/structs/XmlSchemaObjectTable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable {
        inline app::XmlSchemaObjectTable__Class** type_info() {
            static app::XmlSchemaObjectTable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaObjectTable__Class**)(modloader::win::memory::resolve_rva(0x04798280));
            }
            return cache;
        }
        inline app::XmlSchemaObjectTable__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaObjectTable__Class>(type_info(), "System.Xml.Schema", "XmlSchemaObjectTable");
        }
        inline app::XmlSchemaObjectTable* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable>(get_class());
        }
    } // namespace XmlSchemaObjectTable
} // namespace app::classes::types
