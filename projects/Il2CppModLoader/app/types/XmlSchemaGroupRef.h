#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaGroupRef {
        inline app::XmlSchemaGroupRef__Class** type_info = (app::XmlSchemaGroupRef__Class**)(modloader::win::memory::resolve_rva(0x0471B438));
        inline app::XmlSchemaGroupRef__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaGroupRef__Class>(type_info, "System.Xml.Schema", "XmlSchemaGroupRef");
        }
        inline app::XmlSchemaGroupRef* create() {
            return il2cpp::create_object<app::XmlSchemaGroupRef>(get_class());
        }
    } // namespace XmlSchemaGroupRef
} // namespace app::classes::types
