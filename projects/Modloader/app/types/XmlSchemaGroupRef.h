#pragma once
#include <Modloader/app/structs/XmlSchemaGroupRef.h>
#include <Modloader/app/structs/XmlSchemaGroupRef__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaGroupRef {
        inline app::XmlSchemaGroupRef__Class** type_info() {
            static app::XmlSchemaGroupRef__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaGroupRef__Class**)(modloader::win::memory::resolve_rva(0x0471B438));
            }
            return cache;
        }
        inline app::XmlSchemaGroupRef__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaGroupRef__Class>(type_info(), "System.Xml.Schema", "XmlSchemaGroupRef");
        }
        inline app::XmlSchemaGroupRef* create() {
            return il2cpp::create_object<app::XmlSchemaGroupRef>(get_class());
        }
    } // namespace XmlSchemaGroupRef
} // namespace app::classes::types
