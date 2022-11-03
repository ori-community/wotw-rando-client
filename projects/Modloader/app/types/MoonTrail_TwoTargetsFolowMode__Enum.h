#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTrail_TwoTargetsFolowMode__Enum {
        namespace {
            inline app::MoonTrail_TwoTargetsFolowMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MoonTrail_TwoTargetsFolowMode__Enum__Class** type_info = &type_info_ref;
        inline app::MoonTrail_TwoTargetsFolowMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTrail_TwoTargetsFolowMode__Enum__Class>(type_info, "Moon", "MoonTrail", "TwoTargetsFolowMode");
        }
        inline app::MoonTrail_TwoTargetsFolowMode__Enum* create() {
            return il2cpp::create_object<app::MoonTrail_TwoTargetsFolowMode__Enum>(get_class());
        }
    } // namespace MoonTrail_TwoTargetsFolowMode__Enum
} // namespace app::classes::types
