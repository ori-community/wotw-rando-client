#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IChargeDashAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IChargeDashAttackable__Class** type_info;
        inline app::IChargeDashAttackable__Class* get_class() {
            return il2cpp::get_class<app::IChargeDashAttackable__Class>(type_info, "", "IChargeDashAttackable");
        }
    } // namespace IChargeDashAttackable
} // namespace app::classes::types
