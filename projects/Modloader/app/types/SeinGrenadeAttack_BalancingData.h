#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinGrenadeAttack_BalancingData__Class.h>
#include <Modloader/app/structs/SeinGrenadeAttack_BalancingData.h>

namespace app::classes::types {
    namespace SeinGrenadeAttack_BalancingData {
        namespace {
            inline app::SeinGrenadeAttack_BalancingData__Class* type_info_ref = nullptr;
        }
        inline app::SeinGrenadeAttack_BalancingData__Class** type_info = &type_info_ref;
        inline app::SeinGrenadeAttack_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinGrenadeAttack_BalancingData__Class>(type_info, "", "SeinGrenadeAttack_BalancingData");
        }
        inline app::SeinGrenadeAttack_BalancingData* create() {
            return il2cpp::create_object<app::SeinGrenadeAttack_BalancingData>(get_class());
        }
    } // namespace SeinGrenadeAttack_BalancingData
} // namespace app::classes::types
