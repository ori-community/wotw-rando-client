#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION {
        namespace {
            inline app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__Class* type_info_ref = nullptr;
        }
        inline app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__Class** type_info = &type_info_ref;
        inline app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__Class>(type_info, "System", "TimeZoneInfo", "DYNAMIC_TIME_ZONE_INFORMATION");
        }
        inline app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION* create() {
            return il2cpp::create_object<app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>(get_class());
        }
        inline app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__Boxed* box(app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION value) {
            return il2cpp::box_value<app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__Boxed>(get_class(), value);
        }
    } // namespace TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION
} // namespace app::classes::types
