#pragma once
#include <Modloader/app/structs/TimeSpanParse_TimeSpanThrowStyle__Enum.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanThrowStyle__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSpanParse_TimeSpanThrowStyle__Enum {
        inline app::TimeSpanParse_TimeSpanThrowStyle__Enum__Class** type_info() {
            static app::TimeSpanParse_TimeSpanThrowStyle__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeSpanParse_TimeSpanThrowStyle__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeSpanParse_TimeSpanThrowStyle__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSpanParse_TimeSpanThrowStyle__Enum__Class>(type_info(), "System.Globalization", "TimeSpanParse", "TimeSpanThrowStyle");
        }
        inline app::TimeSpanParse_TimeSpanThrowStyle__Enum* create() {
            return il2cpp::create_object<app::TimeSpanParse_TimeSpanThrowStyle__Enum>(get_class());
        }
    } // namespace TimeSpanParse_TimeSpanThrowStyle__Enum
} // namespace app::classes::types
