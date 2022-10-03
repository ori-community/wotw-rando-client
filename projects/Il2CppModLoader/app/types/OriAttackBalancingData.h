#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriAttackBalancingData {
        namespace {
            app::OriAttackBalancingData__Class* type_info_ref = nullptr;
        }
        app::OriAttackBalancingData__Class** type_info = &type_info_ref;
        inline app::OriAttackBalancingData__Class* get_class() {
            return il2cpp::get_class<app::OriAttackBalancingData__Class>(type_info, "", "OriAttackBalancingData");
        }
        inline app::OriAttackBalancingData* create() {
            return il2cpp::create_object<app::OriAttackBalancingData>(get_class());
        }
    } // namespace OriAttackBalancingData
} // namespace app::classes::types
