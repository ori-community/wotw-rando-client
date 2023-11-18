#pragma once
#include <Modloader/app/structs/TimeSpanFormat_Pattern__Enum.h>
#include <Modloader/app/structs/TimeSpanFormat_Pattern__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSpanFormat_Pattern__Enum {
        inline app::TimeSpanFormat_Pattern__Enum__Class** type_info() {
            static app::TimeSpanFormat_Pattern__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeSpanFormat_Pattern__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeSpanFormat_Pattern__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSpanFormat_Pattern__Enum__Class>(type_info(), "System.Globalization", "TimeSpanFormat", "Pattern");
        }
        inline app::TimeSpanFormat_Pattern__Enum* create() {
            return il2cpp::create_object<app::TimeSpanFormat_Pattern__Enum>(get_class());
        }
    } // namespace TimeSpanFormat_Pattern__Enum
} // namespace app::classes::types
