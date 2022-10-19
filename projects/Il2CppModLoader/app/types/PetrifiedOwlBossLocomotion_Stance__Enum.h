#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLocomotion_Stance__Enum {
        namespace {
            inline app::PetrifiedOwlBossLocomotion_Stance__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossLocomotion_Stance__Enum__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossLocomotion_Stance__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLocomotion_Stance__Enum__Class>(type_info, "", "PetrifiedOwlBossLocomotion", "Stance");
        }
        inline app::PetrifiedOwlBossLocomotion_Stance__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLocomotion_Stance__Enum>(get_class());
        }
    } // namespace PetrifiedOwlBossLocomotion_Stance__Enum
} // namespace app::classes::types
