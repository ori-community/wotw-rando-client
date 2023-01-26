#pragma once
#include <Modloader/app/structs/XmlSchemaSubstitutionGroupV1Compat.h>
#include <Modloader/app/structs/XmlSchemaSubstitutionGroupV1Compat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSubstitutionGroupV1Compat {
        inline app::XmlSchemaSubstitutionGroupV1Compat__Class** type_info() {
            static app::XmlSchemaSubstitutionGroupV1Compat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaSubstitutionGroupV1Compat__Class**)(modloader::win::memory::resolve_rva(0x04711840));
            }
            return cache;
        }
        inline app::XmlSchemaSubstitutionGroupV1Compat__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSubstitutionGroupV1Compat__Class>(type_info(), "System.Xml.Schema", "XmlSchemaSubstitutionGroupV1Compat");
        }
        inline app::XmlSchemaSubstitutionGroupV1Compat* create() {
            return il2cpp::create_object<app::XmlSchemaSubstitutionGroupV1Compat>(get_class());
        }
    } // namespace XmlSchemaSubstitutionGroupV1Compat
} // namespace app::classes::types
