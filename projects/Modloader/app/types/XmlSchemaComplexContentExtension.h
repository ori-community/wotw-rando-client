#pragma once
#include <Modloader/app/structs/XmlSchemaComplexContentExtension.h>
#include <Modloader/app/structs/XmlSchemaComplexContentExtension__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaComplexContentExtension {
        inline app::XmlSchemaComplexContentExtension__Class** type_info() {
            static app::XmlSchemaComplexContentExtension__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaComplexContentExtension__Class**)(modloader::win::memory::resolve_rva(0x04745380));
            }
            return cache;
        }
        inline app::XmlSchemaComplexContentExtension__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaComplexContentExtension__Class>(type_info(), "System.Xml.Schema", "XmlSchemaComplexContentExtension");
        }
        inline app::XmlSchemaComplexContentExtension* create() {
            return il2cpp::create_object<app::XmlSchemaComplexContentExtension>(get_class());
        }
    } // namespace XmlSchemaComplexContentExtension
} // namespace app::classes::types
