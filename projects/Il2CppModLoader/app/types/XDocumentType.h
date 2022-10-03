#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XDocumentType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XDocumentType__Class** type_info;
        inline app::XDocumentType__Class* get_class() {
            return il2cpp::get_class<app::XDocumentType__Class>(type_info, "System.Xml.Linq", "XDocumentType");
        }
        inline app::XDocumentType* create() {
            return il2cpp::create_object<app::XDocumentType>(get_class());
        }
    } // namespace XDocumentType
} // namespace app::classes::types
