#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossLocomotion_LocomotionMode__Enum__Class.h>
#include <Modloader/app/structs/KwolokBossLocomotion_LocomotionMode__Enum.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_LocomotionMode__Enum {
        namespace {
            inline app::KwolokBossLocomotion_LocomotionMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossLocomotion_LocomotionMode__Enum__Class** type_info = &type_info_ref;
        inline app::KwolokBossLocomotion_LocomotionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_LocomotionMode__Enum__Class>(type_info, "", "KwolokBossLocomotion", "LocomotionMode");
        }
        inline app::KwolokBossLocomotion_LocomotionMode__Enum* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_LocomotionMode__Enum>(get_class());
        }
    } // namespace KwolokBossLocomotion_LocomotionMode__Enum
} // namespace app::classes::types
