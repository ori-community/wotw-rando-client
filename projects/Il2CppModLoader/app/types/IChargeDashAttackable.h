#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IChargeDashAttackable {
        inline app::IChargeDashAttackable__Class** type_info = (app::IChargeDashAttackable__Class**)(modloader::win::memory::resolve_rva(0x047081D0));
        inline app::IChargeDashAttackable__Class* get_class() {
            return il2cpp::get_class<app::IChargeDashAttackable__Class>(type_info, "", "IChargeDashAttackable");
        }
    } // namespace IChargeDashAttackable
} // namespace app::classes::types
