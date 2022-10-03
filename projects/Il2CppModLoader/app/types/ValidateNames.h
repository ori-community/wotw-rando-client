#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidateNames {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidateNames__Class** type_info;
        inline app::ValidateNames__Class* get_class() {
            return il2cpp::get_class<app::ValidateNames__Class>(type_info, "System.Xml", "ValidateNames");
        }
        inline app::ValidateNames* create() {
            return il2cpp::create_object<app::ValidateNames>(get_class());
        }
    } // namespace ValidateNames
} // namespace app::classes::types
