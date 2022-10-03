#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutoValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AutoValidator__Class** type_info;
        inline app::AutoValidator__Class* get_class() {
            return il2cpp::get_class<app::AutoValidator__Class>(type_info, "System.Xml.Schema", "AutoValidator");
        }
        inline app::AutoValidator* create() {
            return il2cpp::create_object<app::AutoValidator>(get_class());
        }
    } // namespace AutoValidator
} // namespace app::classes::types
