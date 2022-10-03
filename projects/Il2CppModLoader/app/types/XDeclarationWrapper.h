#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XDeclarationWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XDeclarationWrapper__Class** type_info;
        inline app::XDeclarationWrapper__Class* get_class() {
            return il2cpp::get_class<app::XDeclarationWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XDeclarationWrapper");
        }
        inline app::XDeclarationWrapper* create() {
            return il2cpp::create_object<app::XDeclarationWrapper>(get_class());
        }
    } // namespace XDeclarationWrapper
} // namespace app::classes::types
