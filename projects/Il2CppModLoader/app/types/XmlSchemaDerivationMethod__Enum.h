#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaDerivationMethod__Enum {
        inline app::XmlSchemaDerivationMethod__Enum__Class** type_info = (app::XmlSchemaDerivationMethod__Enum__Class**)(modloader::win::memory::resolve_rva(0x04789A60));
        inline app::XmlSchemaDerivationMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaDerivationMethod__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaDerivationMethod");
        }
        inline app::XmlSchemaDerivationMethod__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaDerivationMethod__Enum>(get_class());
        }
    } // namespace XmlSchemaDerivationMethod__Enum
} // namespace app::classes::types
