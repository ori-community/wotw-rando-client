#pragma once
#include <Modloader/app/structs/KwolokBossLocomotion_LocomotionMode__Enum.h>
#include <Modloader/app/structs/KwolokBossLocomotion_LocomotionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_LocomotionMode__Enum {
        inline app::KwolokBossLocomotion_LocomotionMode__Enum__Class** type_info() {
            static app::KwolokBossLocomotion_LocomotionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossLocomotion_LocomotionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossLocomotion_LocomotionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_LocomotionMode__Enum__Class>(type_info(), "", "KwolokBossLocomotion", "LocomotionMode");
        }
        inline app::KwolokBossLocomotion_LocomotionMode__Enum* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_LocomotionMode__Enum>(get_class());
        }
    } // namespace KwolokBossLocomotion_LocomotionMode__Enum
} // namespace app::classes::types
