#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfo_AdjustmentRule {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeZoneInfo_AdjustmentRule__Class** type_info;
        inline app::TimeZoneInfo_AdjustmentRule__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeZoneInfo_AdjustmentRule__Class>(type_info, "System", "TimeZoneInfo", "AdjustmentRule");
        }
        inline app::TimeZoneInfo_AdjustmentRule* create() {
            return il2cpp::create_object<app::TimeZoneInfo_AdjustmentRule>(get_class());
        }
        inline app::TimeZoneInfo_AdjustmentRule__Array* create_array(int size) {
            return il2cpp::array_new<app::TimeZoneInfo_AdjustmentRule__Array>(get_class(), size);
        }
        inline app::TimeZoneInfo_AdjustmentRule__Array* create_array(const std::vector<app::TimeZoneInfo_AdjustmentRule*>& items) {
            return il2cpp::array_new<app::TimeZoneInfo_AdjustmentRule__Array>(get_class(), items);
        }
    } // namespace TimeZoneInfo_AdjustmentRule
} // namespace app::classes::types
