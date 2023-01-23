#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinJump_JumpType__Enum__Class.h>
#include <Modloader/app/structs/SeinJump_JumpType__Enum.h>

namespace app::classes::types {
    namespace SeinJump_JumpType__Enum {
        namespace {
            inline app::SeinJump_JumpType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinJump_JumpType__Enum__Class** type_info = &type_info_ref;
        inline app::SeinJump_JumpType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinJump_JumpType__Enum__Class>(type_info, "", "SeinJump", "JumpType");
        }
        inline app::SeinJump_JumpType__Enum* create() {
            return il2cpp::create_object<app::SeinJump_JumpType__Enum>(get_class());
        }
    } // namespace SeinJump_JumpType__Enum
} // namespace app::classes::types
