#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDashAttack {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDashAttack__Class** type_info;
        inline app::SeinDashAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinDashAttack__Class>(type_info, "", "SeinDashAttack");
        }
        inline app::SeinDashAttack* create() {
            return il2cpp::create_object<app::SeinDashAttack>(get_class());
        }
    } // namespace SeinDashAttack
} // namespace app::classes::types
