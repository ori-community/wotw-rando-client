#pragma once
#include <Modloader/app/structs/XmlSchemaComplexType.h>
#include <Modloader/app/structs/XmlSchemaComplexType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaComplexType {
        inline app::XmlSchemaComplexType__Class** type_info() {
            static app::XmlSchemaComplexType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaComplexType__Class**)(modloader::win::memory::resolve_rva(0x0473F4B0));
            }
            return cache;
        }
        inline app::XmlSchemaComplexType__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaComplexType__Class>(type_info(), "System.Xml.Schema", "XmlSchemaComplexType");
        }
        inline app::XmlSchemaComplexType* create() {
            return il2cpp::create_object<app::XmlSchemaComplexType>(get_class());
        }
    } // namespace XmlSchemaComplexType
} // namespace app::classes::types
