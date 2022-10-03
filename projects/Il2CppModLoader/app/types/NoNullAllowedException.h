#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NoNullAllowedException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NoNullAllowedException__Class** type_info;
        inline app::NoNullAllowedException__Class* get_class() {
            return il2cpp::get_class<app::NoNullAllowedException__Class>(type_info, "System.Data", "NoNullAllowedException");
        }
        inline app::NoNullAllowedException* create() {
            return il2cpp::create_object<app::NoNullAllowedException>(get_class());
        }
    } // namespace NoNullAllowedException
} // namespace app::classes::types
