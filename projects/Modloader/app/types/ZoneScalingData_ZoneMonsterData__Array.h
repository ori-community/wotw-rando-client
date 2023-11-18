#pragma once
#include <Modloader/app/structs/ZoneScalingData_ZoneMonsterData__Array.h>
#include <Modloader/app/structs/ZoneScalingData_ZoneMonsterData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZoneScalingData_ZoneMonsterData__Array {
        inline app::ZoneScalingData_ZoneMonsterData__Array__Class** type_info() {
            static app::ZoneScalingData_ZoneMonsterData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZoneScalingData_ZoneMonsterData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZoneScalingData_ZoneMonsterData__Array__Class* get_class() {
            return il2cpp::get_class<app::ZoneScalingData_ZoneMonsterData__Array__Class>(type_info(), "", "ZoneScalingData+ZoneMonsterData[]");
        }
        inline app::ZoneScalingData_ZoneMonsterData__Array* create() {
            return il2cpp::create_object<app::ZoneScalingData_ZoneMonsterData__Array>(get_class());
        }
    } // namespace ZoneScalingData_ZoneMonsterData__Array
} // namespace app::classes::types
