#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StressTester_DoStressTestsOverrideMode__Enum {
        namespace {
            app::StressTester_DoStressTestsOverrideMode__Enum__Class* type_info_ref = nullptr;
        }
        app::StressTester_DoStressTestsOverrideMode__Enum__Class** type_info = &type_info_ref;
        inline app::StressTester_DoStressTestsOverrideMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_DoStressTestsOverrideMode__Enum__Class>(type_info, "", "StressTester", "DoStressTestsOverrideMode");
        }
        inline app::StressTester_DoStressTestsOverrideMode__Enum* create() {
            return il2cpp::create_object<app::StressTester_DoStressTestsOverrideMode__Enum>(get_class());
        }
    } // namespace StressTester_DoStressTestsOverrideMode__Enum
} // namespace app::classes::types
