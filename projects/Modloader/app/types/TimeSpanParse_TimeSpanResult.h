#pragma once
#include <Modloader/app/structs/TimeSpanParse_TimeSpanResult.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanResult__Boxed.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSpanParse_TimeSpanResult {
        inline app::TimeSpanParse_TimeSpanResult__Class** type_info() {
            static app::TimeSpanParse_TimeSpanResult__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeSpanParse_TimeSpanResult__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeSpanParse_TimeSpanResult__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSpanParse_TimeSpanResult__Class>(type_info(), "System.Globalization", "TimeSpanParse", "TimeSpanResult");
        }
        inline app::TimeSpanParse_TimeSpanResult* create() {
            return il2cpp::create_object<app::TimeSpanParse_TimeSpanResult>(get_class());
        }
        inline app::TimeSpanParse_TimeSpanResult__Boxed* box(app::TimeSpanParse_TimeSpanResult value) {
            return il2cpp::box_value<app::TimeSpanParse_TimeSpanResult__Boxed>(get_class(), value);
        }
    } // namespace TimeSpanParse_TimeSpanResult
} // namespace app::classes::types
