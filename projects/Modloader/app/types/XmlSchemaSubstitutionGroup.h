#pragma once
#include <Modloader/app/structs/XmlSchemaSubstitutionGroup.h>
#include <Modloader/app/structs/XmlSchemaSubstitutionGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSubstitutionGroup {
        inline app::XmlSchemaSubstitutionGroup__Class** type_info() {
            static app::XmlSchemaSubstitutionGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaSubstitutionGroup__Class**)(modloader::win::memory::resolve_rva(0x04722778));
            }
            return cache;
        }
        inline app::XmlSchemaSubstitutionGroup__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSubstitutionGroup__Class>(type_info(), "System.Xml.Schema", "XmlSchemaSubstitutionGroup");
        }
        inline app::XmlSchemaSubstitutionGroup* create() {
            return il2cpp::create_object<app::XmlSchemaSubstitutionGroup>(get_class());
        }
    } // namespace XmlSchemaSubstitutionGroup
} // namespace app::classes::types
