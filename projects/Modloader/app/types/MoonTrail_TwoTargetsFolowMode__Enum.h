#pragma once
#include <Modloader/app/structs/MoonTrail_TwoTargetsFolowMode__Enum.h>
#include <Modloader/app/structs/MoonTrail_TwoTargetsFolowMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrail_TwoTargetsFolowMode__Enum {
        inline app::MoonTrail_TwoTargetsFolowMode__Enum__Class** type_info() {
            static app::MoonTrail_TwoTargetsFolowMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTrail_TwoTargetsFolowMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTrail_TwoTargetsFolowMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTrail_TwoTargetsFolowMode__Enum__Class>(type_info(), "Moon", "MoonTrail", "TwoTargetsFolowMode");
        }
        inline app::MoonTrail_TwoTargetsFolowMode__Enum* create() {
            return il2cpp::create_object<app::MoonTrail_TwoTargetsFolowMode__Enum>(get_class());
        }
    } // namespace MoonTrail_TwoTargetsFolowMode__Enum
} // namespace app::classes::types
