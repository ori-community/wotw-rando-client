#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaContentProcessing__Enum {
        inline app::XmlSchemaContentProcessing__Enum__Class** type_info = (app::XmlSchemaContentProcessing__Enum__Class**)(modloader::win::memory::resolve_rva(0x047583F0));
        inline app::XmlSchemaContentProcessing__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaContentProcessing__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaContentProcessing");
        }
        inline app::XmlSchemaContentProcessing__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaContentProcessing__Enum>(get_class());
        }
    } // namespace XmlSchemaContentProcessing__Enum
} // namespace app::classes::types
