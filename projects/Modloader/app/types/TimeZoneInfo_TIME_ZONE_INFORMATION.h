#pragma once
#include <Modloader/app/structs/TimeZoneInfo_TIME_ZONE_INFORMATION.h>
#include <Modloader/app/structs/TimeZoneInfo_TIME_ZONE_INFORMATION__Boxed.h>
#include <Modloader/app/structs/TimeZoneInfo_TIME_ZONE_INFORMATION__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfo_TIME_ZONE_INFORMATION {
        inline app::TimeZoneInfo_TIME_ZONE_INFORMATION__Class** type_info() {
            static app::TimeZoneInfo_TIME_ZONE_INFORMATION__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeZoneInfo_TIME_ZONE_INFORMATION__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeZoneInfo_TIME_ZONE_INFORMATION__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeZoneInfo_TIME_ZONE_INFORMATION__Class>(type_info(), "System", "TimeZoneInfo", "TIME_ZONE_INFORMATION");
        }
        inline app::TimeZoneInfo_TIME_ZONE_INFORMATION* create() {
            return il2cpp::create_object<app::TimeZoneInfo_TIME_ZONE_INFORMATION>(get_class());
        }
        inline app::TimeZoneInfo_TIME_ZONE_INFORMATION__Boxed* box(app::TimeZoneInfo_TIME_ZONE_INFORMATION value) {
            return il2cpp::box_value<app::TimeZoneInfo_TIME_ZONE_INFORMATION__Boxed>(get_class(), value);
        }
    } // namespace TimeZoneInfo_TIME_ZONE_INFORMATION
} // namespace app::classes::types
