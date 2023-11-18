#pragma once
#include <Modloader/app/structs/IChargeDashAttackable.h>
#include <Modloader/app/structs/IChargeDashAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IChargeDashAttackable {
        inline app::IChargeDashAttackable__Class** type_info() {
            static app::IChargeDashAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IChargeDashAttackable__Class**)(modloader::win::memory::resolve_rva(0x047081D0));
            }
            return cache;
        }
        inline app::IChargeDashAttackable__Class* get_class() {
            return il2cpp::get_class<app::IChargeDashAttackable__Class>(type_info(), "", "IChargeDashAttackable");
        }
    } // namespace IChargeDashAttackable
} // namespace app::classes::types
