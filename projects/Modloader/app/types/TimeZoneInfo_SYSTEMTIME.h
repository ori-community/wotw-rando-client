#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeZoneInfo_SYSTEMTIME__Class.h>
#include <Modloader/app/structs/TimeZoneInfo_SYSTEMTIME.h>
#include <Modloader/app/structs/TimeZoneInfo_SYSTEMTIME__Boxed.h>

namespace app::classes::types {
    namespace TimeZoneInfo_SYSTEMTIME {
        namespace {
            inline app::TimeZoneInfo_SYSTEMTIME__Class* type_info_ref = nullptr;
        }
        inline app::TimeZoneInfo_SYSTEMTIME__Class** type_info = &type_info_ref;
        inline app::TimeZoneInfo_SYSTEMTIME__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeZoneInfo_SYSTEMTIME__Class>(type_info, "System", "TimeZoneInfo", "SYSTEMTIME");
        }
        inline app::TimeZoneInfo_SYSTEMTIME* create() {
            return il2cpp::create_object<app::TimeZoneInfo_SYSTEMTIME>(get_class());
        }
        inline app::TimeZoneInfo_SYSTEMTIME__Boxed* box(app::TimeZoneInfo_SYSTEMTIME value) {
            return il2cpp::box_value<app::TimeZoneInfo_SYSTEMTIME__Boxed>(get_class(), value);
        }
    } // namespace TimeZoneInfo_SYSTEMTIME
} // namespace app::classes::types
