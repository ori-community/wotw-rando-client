#pragma once
#include <Modloader/app/structs/TimeZoneInfo_SYSTEMTIME.h>
#include <Modloader/app/structs/TimeZoneInfo_SYSTEMTIME__Boxed.h>
#include <Modloader/app/structs/TimeZoneInfo_SYSTEMTIME__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfo_SYSTEMTIME {
        inline app::TimeZoneInfo_SYSTEMTIME__Class** type_info() {
            static app::TimeZoneInfo_SYSTEMTIME__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeZoneInfo_SYSTEMTIME__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeZoneInfo_SYSTEMTIME__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeZoneInfo_SYSTEMTIME__Class>(type_info(), "System", "TimeZoneInfo", "SYSTEMTIME");
        }
        inline app::TimeZoneInfo_SYSTEMTIME* create() {
            return il2cpp::create_object<app::TimeZoneInfo_SYSTEMTIME>(get_class());
        }
        inline app::TimeZoneInfo_SYSTEMTIME__Boxed* box(app::TimeZoneInfo_SYSTEMTIME value) {
            return il2cpp::box_value<app::TimeZoneInfo_SYSTEMTIME__Boxed>(get_class(), value);
        }
    } // namespace TimeZoneInfo_SYSTEMTIME
} // namespace app::classes::types
