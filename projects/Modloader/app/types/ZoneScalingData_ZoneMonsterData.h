#pragma once
#include <Modloader/app/structs/ZoneScalingData_ZoneMonsterData.h>
#include <Modloader/app/structs/ZoneScalingData_ZoneMonsterData__Array.h>
#include <Modloader/app/structs/ZoneScalingData_ZoneMonsterData__Boxed.h>
#include <Modloader/app/structs/ZoneScalingData_ZoneMonsterData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZoneScalingData_ZoneMonsterData {
        inline app::ZoneScalingData_ZoneMonsterData__Class** type_info() {
            static app::ZoneScalingData_ZoneMonsterData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZoneScalingData_ZoneMonsterData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZoneScalingData_ZoneMonsterData__Class* get_class() {
            return il2cpp::get_nested_class<app::ZoneScalingData_ZoneMonsterData__Class>(type_info(), "", "ZoneScalingData", "ZoneMonsterData");
        }
        inline app::ZoneScalingData_ZoneMonsterData* create() {
            return il2cpp::create_object<app::ZoneScalingData_ZoneMonsterData>(get_class());
        }
        inline app::ZoneScalingData_ZoneMonsterData__Boxed* box(app::ZoneScalingData_ZoneMonsterData value) {
            return il2cpp::box_value<app::ZoneScalingData_ZoneMonsterData__Boxed>(get_class(), value);
        }
        inline app::ZoneScalingData_ZoneMonsterData__Array* create_array(int size) {
            return il2cpp::array_new<app::ZoneScalingData_ZoneMonsterData__Array>(get_class(), size);
        }
        inline app::ZoneScalingData_ZoneMonsterData__Array* create_array(const std::vector<app::ZoneScalingData_ZoneMonsterData>& items) {
            return il2cpp::array_new<app::ZoneScalingData_ZoneMonsterData__Array>(get_class(), items);
        }
    } // namespace ZoneScalingData_ZoneMonsterData
} // namespace app::classes::types
