#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IChargeFlameAttackable__Class.h>

namespace app::classes::types {
    namespace IChargeFlameAttackable {
        inline app::IChargeFlameAttackable__Class** type_info = (app::IChargeFlameAttackable__Class**)(modloader::win::memory::resolve_rva(0x04751990));
        inline app::IChargeFlameAttackable__Class* get_class() {
            return il2cpp::get_class<app::IChargeFlameAttackable__Class>(type_info, "", "IChargeFlameAttackable");
        }
    } // namespace IChargeFlameAttackable
} // namespace app::classes::types
