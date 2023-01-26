#pragma once
#include <Modloader/app/structs/XmlSchemaExternal.h>
#include <Modloader/app/structs/XmlSchemaExternal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaExternal {
        inline app::XmlSchemaExternal__Class** type_info() {
            static app::XmlSchemaExternal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaExternal__Class**)(modloader::win::memory::resolve_rva(0x047755B8));
            }
            return cache;
        }
        inline app::XmlSchemaExternal__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaExternal__Class>(type_info(), "System.Xml.Schema", "XmlSchemaExternal");
        }
        inline app::XmlSchemaExternal* create() {
            return il2cpp::create_object<app::XmlSchemaExternal>(get_class());
        }
    } // namespace XmlSchemaExternal
} // namespace app::classes::types
