#pragma once
#include <Modloader/app/structs/TimeSpanParse_TimeSpanRawInfo.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanRawInfo__Boxed.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanRawInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSpanParse_TimeSpanRawInfo {
        inline app::TimeSpanParse_TimeSpanRawInfo__Class** type_info() {
            static app::TimeSpanParse_TimeSpanRawInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeSpanParse_TimeSpanRawInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeSpanParse_TimeSpanRawInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSpanParse_TimeSpanRawInfo__Class>(type_info(), "System.Globalization", "TimeSpanParse", "TimeSpanRawInfo");
        }
        inline app::TimeSpanParse_TimeSpanRawInfo* create() {
            return il2cpp::create_object<app::TimeSpanParse_TimeSpanRawInfo>(get_class());
        }
        inline app::TimeSpanParse_TimeSpanRawInfo__Boxed* box(app::TimeSpanParse_TimeSpanRawInfo value) {
            return il2cpp::box_value<app::TimeSpanParse_TimeSpanRawInfo__Boxed>(get_class(), value);
        }
    } // namespace TimeSpanParse_TimeSpanRawInfo
} // namespace app::classes::types
