#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLocomotion_Stance__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlBossLocomotion_Stance__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLocomotion_Stance__Enum {
        inline app::PetrifiedOwlBossLocomotion_Stance__Enum__Class** type_info() {
            static app::PetrifiedOwlBossLocomotion_Stance__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossLocomotion_Stance__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLocomotion_Stance__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLocomotion_Stance__Enum__Class>(type_info(), "", "PetrifiedOwlBossLocomotion", "Stance");
        }
        inline app::PetrifiedOwlBossLocomotion_Stance__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLocomotion_Stance__Enum>(get_class());
        }
    } // namespace PetrifiedOwlBossLocomotion_Stance__Enum
} // namespace app::classes::types
