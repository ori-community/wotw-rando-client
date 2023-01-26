#pragma once
#include <Modloader/app/structs/SeinJump_JumpType__Enum.h>
#include <Modloader/app/structs/SeinJump_JumpType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinJump_JumpType__Enum {
        inline app::SeinJump_JumpType__Enum__Class** type_info() {
            static app::SeinJump_JumpType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinJump_JumpType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinJump_JumpType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinJump_JumpType__Enum__Class>(type_info(), "", "SeinJump", "JumpType");
        }
        inline app::SeinJump_JumpType__Enum* create() {
            return il2cpp::create_object<app::SeinJump_JumpType__Enum>(get_class());
        }
    } // namespace SeinJump_JumpType__Enum
} // namespace app::classes::types
