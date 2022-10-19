#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaComplexContentExtension {
        inline app::XmlSchemaComplexContentExtension__Class** type_info = (app::XmlSchemaComplexContentExtension__Class**)(modloader::win::memory::resolve_rva(0x04745380));
        inline app::XmlSchemaComplexContentExtension__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaComplexContentExtension__Class>(type_info, "System.Xml.Schema", "XmlSchemaComplexContentExtension");
        }
        inline app::XmlSchemaComplexContentExtension* create() {
            return il2cpp::create_object<app::XmlSchemaComplexContentExtension>(get_class());
        }
    } // namespace XmlSchemaComplexContentExtension
} // namespace app::classes::types
