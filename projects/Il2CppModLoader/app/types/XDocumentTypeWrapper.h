#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XDocumentTypeWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XDocumentTypeWrapper__Class** type_info;
        inline app::XDocumentTypeWrapper__Class* get_class() {
            return il2cpp::get_class<app::XDocumentTypeWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XDocumentTypeWrapper");
        }
        inline app::XDocumentTypeWrapper* create() {
            return il2cpp::create_object<app::XDocumentTypeWrapper>(get_class());
        }
    } // namespace XDocumentTypeWrapper
} // namespace app::classes::types
