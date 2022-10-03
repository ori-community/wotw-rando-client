#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlDocumentType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlDocumentType__Class** type_info;
        inline app::XmlDocumentType__Class* get_class() {
            return il2cpp::get_class<app::XmlDocumentType__Class>(type_info, "System.Xml", "XmlDocumentType");
        }
        inline app::XmlDocumentType* create() {
            return il2cpp::create_object<app::XmlDocumentType>(get_class());
        }
    } // namespace XmlDocumentType
} // namespace app::classes::types
