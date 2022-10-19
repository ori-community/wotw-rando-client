#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonthNameStyles__Enum {
        namespace {
            inline app::MonthNameStyles__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MonthNameStyles__Enum__Class** type_info = &type_info_ref;
        inline app::MonthNameStyles__Enum__Class* get_class() {
            return il2cpp::get_class<app::MonthNameStyles__Enum__Class>(type_info, "System.Globalization", "MonthNameStyles");
        }
        inline app::MonthNameStyles__Enum* create() {
            return il2cpp::create_object<app::MonthNameStyles__Enum>(get_class());
        }
    } // namespace MonthNameStyles__Enum
} // namespace app::classes::types
