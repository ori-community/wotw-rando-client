#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IXmlDocumentType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IXmlDocumentType__Class** type_info;
        inline app::IXmlDocumentType__Class* get_class() {
            return il2cpp::get_class<app::IXmlDocumentType__Class>(type_info, "Newtonsoft.Json.Converters", "IXmlDocumentType");
        }
    } // namespace IXmlDocumentType
} // namespace app::classes::types
