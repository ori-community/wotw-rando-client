#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriAttackBalancingData {
        namespace {
            inline app::OriAttackBalancingData__Class* type_info_ref = nullptr;
        }
        inline app::OriAttackBalancingData__Class** type_info = &type_info_ref;
        inline app::OriAttackBalancingData__Class* get_class() {
            return il2cpp::get_class<app::OriAttackBalancingData__Class>(type_info, "", "OriAttackBalancingData");
        }
        inline app::OriAttackBalancingData* create() {
            return il2cpp::create_object<app::OriAttackBalancingData>(get_class());
        }
    } // namespace OriAttackBalancingData
} // namespace app::classes::types
