#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfo_SYSTEMTIME {
        namespace {
            app::TimeZoneInfo_SYSTEMTIME__Class* type_info_ref = nullptr;
        }
        app::TimeZoneInfo_SYSTEMTIME__Class** type_info = &type_info_ref;
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
