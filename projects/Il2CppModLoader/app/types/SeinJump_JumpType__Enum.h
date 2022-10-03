#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinJump_JumpType__Enum {
        namespace {
            app::SeinJump_JumpType__Enum__Class* type_info_ref = nullptr;
        }
        app::SeinJump_JumpType__Enum__Class** type_info = &type_info_ref;
        inline app::SeinJump_JumpType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinJump_JumpType__Enum__Class>(type_info, "", "SeinJump", "JumpType");
        }
        inline app::SeinJump_JumpType__Enum* create() {
            return il2cpp::create_object<app::SeinJump_JumpType__Enum>(get_class());
        }
    } // namespace SeinJump_JumpType__Enum
} // namespace app::classes::types
