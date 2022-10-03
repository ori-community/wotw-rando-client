#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTrail_TwoTargetsFolowMode__Enum {
        namespace {
            app::MoonTrail_TwoTargetsFolowMode__Enum__Class* type_info_ref = nullptr;
        }
        app::MoonTrail_TwoTargetsFolowMode__Enum__Class** type_info = &type_info_ref;
        inline app::MoonTrail_TwoTargetsFolowMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTrail_TwoTargetsFolowMode__Enum__Class>(type_info, "Moon", "MoonTrail", "TwoTargetsFolowMode");
        }
        inline app::MoonTrail_TwoTargetsFolowMode__Enum* create() {
            return il2cpp::create_object<app::MoonTrail_TwoTargetsFolowMode__Enum>(get_class());
        }
    } // namespace MoonTrail_TwoTargetsFolowMode__Enum
} // namespace app::classes::types
