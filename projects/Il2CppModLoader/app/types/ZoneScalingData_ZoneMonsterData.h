#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZoneScalingData_ZoneMonsterData {
        namespace {
            app::ZoneScalingData_ZoneMonsterData__Class* type_info_ref = nullptr;
        }
        app::ZoneScalingData_ZoneMonsterData__Class** type_info = &type_info_ref;
        inline app::ZoneScalingData_ZoneMonsterData__Class* get_class() {
            return il2cpp::get_nested_class<app::ZoneScalingData_ZoneMonsterData__Class>(type_info, "", "ZoneScalingData", "ZoneMonsterData");
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
        inline app::ZoneScalingData_ZoneMonsterData__Array* create_array(const std::vector<app::ZoneScalingData_ZoneMonsterData__Boxed>& items) {
            return il2cpp::array_new<app::ZoneScalingData_ZoneMonsterData__Array>(get_class(), items);
        }
    } // namespace ZoneScalingData_ZoneMonsterData
} // namespace app::classes::types
