#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpanFormat_FormatLiterals {
        namespace {
            app::TimeSpanFormat_FormatLiterals__Class* type_info_ref = nullptr;
        }
        app::TimeSpanFormat_FormatLiterals__Class** type_info = &type_info_ref;
        inline app::TimeSpanFormat_FormatLiterals__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSpanFormat_FormatLiterals__Class>(type_info, "System.Globalization", "TimeSpanFormat", "FormatLiterals");
        }
        inline app::TimeSpanFormat_FormatLiterals* create() {
            return il2cpp::create_object<app::TimeSpanFormat_FormatLiterals>(get_class());
        }
        inline app::TimeSpanFormat_FormatLiterals__Boxed* box(app::TimeSpanFormat_FormatLiterals value) {
            return il2cpp::box_value<app::TimeSpanFormat_FormatLiterals__Boxed>(get_class(), value);
        }
    } // namespace TimeSpanFormat_FormatLiterals
} // namespace app::classes::types
