#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlDocumentWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlDocumentWrapper__Class** type_info;
        inline app::XmlDocumentWrapper__Class* get_class() {
            return il2cpp::get_class<app::XmlDocumentWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XmlDocumentWrapper");
        }
        inline app::XmlDocumentWrapper* create() {
            return il2cpp::create_object<app::XmlDocumentWrapper>(get_class());
        }
    } // namespace XmlDocumentWrapper
} // namespace app::classes::types
