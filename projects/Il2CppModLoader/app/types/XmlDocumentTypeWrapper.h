#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlDocumentTypeWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlDocumentTypeWrapper__Class** type_info;
        inline app::XmlDocumentTypeWrapper__Class* get_class() {
            return il2cpp::get_class<app::XmlDocumentTypeWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XmlDocumentTypeWrapper");
        }
        inline app::XmlDocumentTypeWrapper* create() {
            return il2cpp::create_object<app::XmlDocumentTypeWrapper>(get_class());
        }
    } // namespace XmlDocumentTypeWrapper
} // namespace app::classes::types
