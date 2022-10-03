#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XdrValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XdrValidator__Class** type_info;
        inline app::XdrValidator__Class* get_class() {
            return il2cpp::get_class<app::XdrValidator__Class>(type_info, "System.Xml.Schema", "XdrValidator");
        }
        inline app::XdrValidator* create() {
            return il2cpp::create_object<app::XdrValidator>(get_class());
        }
    } // namespace XdrValidator
} // namespace app::classes::types
