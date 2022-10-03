#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StressTestStatus__Enum {
        namespace {
            app::StressTestStatus__Enum__Class* type_info_ref = nullptr;
        }
        app::StressTestStatus__Enum__Class** type_info = &type_info_ref;
        inline app::StressTestStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::StressTestStatus__Enum__Class>(type_info, "", "StressTestStatus");
        }
        inline app::StressTestStatus__Enum* create() {
            return il2cpp::create_object<app::StressTestStatus__Enum>(get_class());
        }
    } // namespace StressTestStatus__Enum
} // namespace app::classes::types
