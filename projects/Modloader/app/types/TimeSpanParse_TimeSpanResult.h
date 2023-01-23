#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanResult__Class.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanResult.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanResult__Boxed.h>

namespace app::classes::types {
    namespace TimeSpanParse_TimeSpanResult {
        namespace {
            inline app::TimeSpanParse_TimeSpanResult__Class* type_info_ref = nullptr;
        }
        inline app::TimeSpanParse_TimeSpanResult__Class** type_info = &type_info_ref;
        inline app::TimeSpanParse_TimeSpanResult__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSpanParse_TimeSpanResult__Class>(type_info, "System.Globalization", "TimeSpanParse", "TimeSpanResult");
        }
        inline app::TimeSpanParse_TimeSpanResult* create() {
            return il2cpp::create_object<app::TimeSpanParse_TimeSpanResult>(get_class());
        }
        inline app::TimeSpanParse_TimeSpanResult__Boxed* box(app::TimeSpanParse_TimeSpanResult value) {
            return il2cpp::box_value<app::TimeSpanParse_TimeSpanResult__Boxed>(get_class(), value);
        }
    } // namespace TimeSpanParse_TimeSpanResult
} // namespace app::classes::types
