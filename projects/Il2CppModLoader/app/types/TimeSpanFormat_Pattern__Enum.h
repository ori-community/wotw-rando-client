#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpanFormat_Pattern__Enum {
        namespace {
            app::TimeSpanFormat_Pattern__Enum__Class* type_info_ref = nullptr;
        }
        app::TimeSpanFormat_Pattern__Enum__Class** type_info = &type_info_ref;
        inline app::TimeSpanFormat_Pattern__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSpanFormat_Pattern__Enum__Class>(type_info, "System.Globalization", "TimeSpanFormat", "Pattern");
        }
        inline app::TimeSpanFormat_Pattern__Enum* create() {
            return il2cpp::create_object<app::TimeSpanFormat_Pattern__Enum>(get_class());
        }
    } // namespace TimeSpanFormat_Pattern__Enum
} // namespace app::classes::types
