#pragma once
#include <Modloader/app/structs/IChargeFlameAttackable.h>
#include <Modloader/app/structs/IChargeFlameAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IChargeFlameAttackable {
        inline app::IChargeFlameAttackable__Class** type_info() {
            static app::IChargeFlameAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IChargeFlameAttackable__Class**)(modloader::win::memory::resolve_rva(0x04751990));
            }
            return cache;
        }
        inline app::IChargeFlameAttackable__Class* get_class() {
            return il2cpp::get_class<app::IChargeFlameAttackable__Class>(type_info(), "", "IChargeFlameAttackable");
        }
    } // namespace IChargeFlameAttackable
} // namespace app::classes::types
