#pragma once
#include <Modloader/app/structs/TimeZoneInfo_AdjustmentRule.h>
#include <Modloader/app/structs/TimeZoneInfo_AdjustmentRule__Array.h>
#include <Modloader/app/structs/TimeZoneInfo_AdjustmentRule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfo_AdjustmentRule {
        inline app::TimeZoneInfo_AdjustmentRule__Class** type_info() {
            static app::TimeZoneInfo_AdjustmentRule__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeZoneInfo_AdjustmentRule__Class**)(modloader::win::memory::resolve_rva(0x04783EE0));
            }
            return cache;
        }
        inline app::TimeZoneInfo_AdjustmentRule__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeZoneInfo_AdjustmentRule__Class>(type_info(), "System", "TimeZoneInfo", "AdjustmentRule");
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
