#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XDocumentWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XDocumentWrapper__Class** type_info;
        inline app::XDocumentWrapper__Class* get_class() {
            return il2cpp::get_class<app::XDocumentWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XDocumentWrapper");
        }
        inline app::XDocumentWrapper* create() {
            return il2cpp::create_object<app::XDocumentWrapper>(get_class());
        }
    } // namespace XDocumentWrapper
} // namespace app::classes::types
