#pragma once
#include <Modloader/app/structs/SandWormLocomotion_SpeedSetting__Enum.h>
#include <Modloader/app/structs/SandWormLocomotion_SpeedSetting__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormLocomotion_SpeedSetting__Enum {
        inline app::SandWormLocomotion_SpeedSetting__Enum__Class** type_info() {
            static app::SandWormLocomotion_SpeedSetting__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormLocomotion_SpeedSetting__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormLocomotion_SpeedSetting__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormLocomotion_SpeedSetting__Enum__Class>(type_info(), "", "SandWormLocomotion", "SpeedSetting");
        }
        inline app::SandWormLocomotion_SpeedSetting__Enum* create() {
            return il2cpp::create_object<app::SandWormLocomotion_SpeedSetting__Enum>(get_class());
        }
    } // namespace SandWormLocomotion_SpeedSetting__Enum
} // namespace app::classes::types
