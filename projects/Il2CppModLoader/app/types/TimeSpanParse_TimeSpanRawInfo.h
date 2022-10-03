#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpanParse_TimeSpanRawInfo {
        namespace {
            app::TimeSpanParse_TimeSpanRawInfo__Class* type_info_ref = nullptr;
        }
        app::TimeSpanParse_TimeSpanRawInfo__Class** type_info = &type_info_ref;
        inline app::TimeSpanParse_TimeSpanRawInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSpanParse_TimeSpanRawInfo__Class>(type_info, "System.Globalization", "TimeSpanParse", "TimeSpanRawInfo");
        }
        inline app::TimeSpanParse_TimeSpanRawInfo* create() {
            return il2cpp::create_object<app::TimeSpanParse_TimeSpanRawInfo>(get_class());
        }
        inline app::TimeSpanParse_TimeSpanRawInfo__Boxed* box(app::TimeSpanParse_TimeSpanRawInfo value) {
            return il2cpp::box_value<app::TimeSpanParse_TimeSpanRawInfo__Boxed>(get_class(), value);
        }
    } // namespace TimeSpanParse_TimeSpanRawInfo
} // namespace app::classes::types
