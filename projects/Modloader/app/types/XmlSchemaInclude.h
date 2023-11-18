#pragma once
#include <Modloader/app/structs/XmlSchemaInclude.h>
#include <Modloader/app/structs/XmlSchemaInclude__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaInclude {
        inline app::XmlSchemaInclude__Class** type_info() {
            static app::XmlSchemaInclude__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaInclude__Class**)(modloader::win::memory::resolve_rva(0x0478DFB8));
            }
            return cache;
        }
        inline app::XmlSchemaInclude__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaInclude__Class>(type_info(), "System.Xml.Schema", "XmlSchemaInclude");
        }
        inline app::XmlSchemaInclude* create() {
            return il2cpp::create_object<app::XmlSchemaInclude>(get_class());
        }
    } // namespace XmlSchemaInclude
} // namespace app::classes::types
