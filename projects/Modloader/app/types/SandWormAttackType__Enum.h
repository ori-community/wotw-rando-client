#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandWormAttackType__Enum__Class.h>
#include <Modloader/app/structs/SandWormAttackType__Enum.h>

namespace app::classes::types {
    namespace SandWormAttackType__Enum {
        namespace {
            inline app::SandWormAttackType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SandWormAttackType__Enum__Class** type_info = &type_info_ref;
        inline app::SandWormAttackType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SandWormAttackType__Enum__Class>(type_info, "", "SandWormAttackType");
        }
        inline app::SandWormAttackType__Enum* create() {
            return il2cpp::create_object<app::SandWormAttackType__Enum>(get_class());
        }
    } // namespace SandWormAttackType__Enum
} // namespace app::classes::types
