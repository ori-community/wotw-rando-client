#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlDocumentType {
        inline app::XmlDocumentType__Class** type_info = (app::XmlDocumentType__Class**)(modloader::win::memory::resolve_rva(0x04759590));
        inline app::XmlDocumentType__Class* get_class() {
            return il2cpp::get_class<app::XmlDocumentType__Class>(type_info, "System.Xml", "XmlDocumentType");
        }
        inline app::XmlDocumentType* create() {
            return il2cpp::create_object<app::XmlDocumentType>(get_class());
        }
    } // namespace XmlDocumentType
} // namespace app::classes::types
