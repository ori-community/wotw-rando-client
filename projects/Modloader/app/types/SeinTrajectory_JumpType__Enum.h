#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinTrajectory_JumpType__Enum__Class.h>
#include <Modloader/app/structs/SeinTrajectory_JumpType__Enum.h>

namespace app::classes::types {
    namespace SeinTrajectory_JumpType__Enum {
        namespace {
            inline app::SeinTrajectory_JumpType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinTrajectory_JumpType__Enum__Class** type_info = &type_info_ref;
        inline app::SeinTrajectory_JumpType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinTrajectory_JumpType__Enum__Class>(type_info, "", "SeinTrajectory", "JumpType");
        }
        inline app::SeinTrajectory_JumpType__Enum* create() {
            return il2cpp::create_object<app::SeinTrajectory_JumpType__Enum>(get_class());
        }
    } // namespace SeinTrajectory_JumpType__Enum
} // namespace app::classes::types
