#pragma once
#include <Modloader/app/structs/XmlSchemaProviderAttribute.h>
#include <Modloader/app/structs/XmlSchemaProviderAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaProviderAttribute {
        inline app::XmlSchemaProviderAttribute__Class** type_info() {
            static app::XmlSchemaProviderAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaProviderAttribute__Class**)(modloader::win::memory::resolve_rva(0x047555D8));
            }
            return cache;
        }
        inline app::XmlSchemaProviderAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaProviderAttribute__Class>(type_info(), "System.Xml.Serialization", "XmlSchemaProviderAttribute");
        }
        inline app::XmlSchemaProviderAttribute* create() {
            return il2cpp::create_object<app::XmlSchemaProviderAttribute>(get_class());
        }
    } // namespace XmlSchemaProviderAttribute
} // namespace app::classes::types
