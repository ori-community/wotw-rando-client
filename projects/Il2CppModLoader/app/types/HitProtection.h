#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitProtection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HitProtection__Class** type_info;
        inline app::HitProtection__Class* get_class() {
            return il2cpp::get_class<app::HitProtection__Class>(type_info, "", "HitProtection");
        }
        inline app::HitProtection* create() {
            return il2cpp::create_object<app::HitProtection>(get_class());
        }
    } // namespace HitProtection
} // namespace app::classes::types
