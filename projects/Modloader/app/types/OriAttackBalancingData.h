#pragma once
#include <Modloader/app/structs/OriAttackBalancingData.h>
#include <Modloader/app/structs/OriAttackBalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriAttackBalancingData {
        inline app::OriAttackBalancingData__Class** type_info() {
            static app::OriAttackBalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriAttackBalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriAttackBalancingData__Class* get_class() {
            return il2cpp::get_class<app::OriAttackBalancingData__Class>(type_info(), "", "OriAttackBalancingData");
        }
        inline app::OriAttackBalancingData* create() {
            return il2cpp::create_object<app::OriAttackBalancingData>(get_class());
        }
    } // namespace OriAttackBalancingData
} // namespace app::classes::types
