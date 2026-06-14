#pragma once
#include <Modloader/app/structs/XmlSchemaIdentityConstraint.h>
#include <Modloader/app/structs/XmlSchemaIdentityConstraint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaIdentityConstraint {
        inline app::XmlSchemaIdentityConstraint__Class** type_info() {
            static app::XmlSchemaIdentityConstraint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaIdentityConstraint__Class**)(modloader::win::memory::resolve_rva(0x047312D8));
            }
            return cache;
        }
        inline app::XmlSchemaIdentityConstraint__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaIdentityConstraint__Class>(type_info(), "System.Xml.Schema", "XmlSchemaIdentityConstraint");
        }
        inline app::XmlSchemaIdentityConstraint* create() {
            return il2cpp::create_object<app::XmlSchemaIdentityConstraint>(get_class());
        }
    } // namespace XmlSchemaIdentityConstraint
} // namespace app::classes::types
