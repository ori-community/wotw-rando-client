#pragma once
#include <Modloader/app/structs/TimeSpanParse_TTT__Enum.h>
#include <Modloader/app/structs/TimeSpanParse_TTT__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSpanParse_TTT__Enum {
        inline app::TimeSpanParse_TTT__Enum__Class** type_info() {
            static app::TimeSpanParse_TTT__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeSpanParse_TTT__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeSpanParse_TTT__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSpanParse_TTT__Enum__Class>(type_info(), "System.Globalization", "TimeSpanParse", "TTT");
        }
        inline app::TimeSpanParse_TTT__Enum* create() {
            return il2cpp::create_object<app::TimeSpanParse_TTT__Enum>(get_class());
        }
    } // namespace TimeSpanParse_TTT__Enum
} // namespace app::classes::types
