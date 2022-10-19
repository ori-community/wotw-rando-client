#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VolumeEntityLocomotion {
        namespace {
            inline app::VolumeEntityLocomotion__Class* type_info_ref = nullptr;
        }
        inline app::VolumeEntityLocomotion__Class** type_info = &type_info_ref;
        inline app::VolumeEntityLocomotion__Class* get_class() {
            return il2cpp::get_class<app::VolumeEntityLocomotion__Class>(type_info, "Moon", "VolumeEntityLocomotion");
        }
        inline app::VolumeEntityLocomotion* create() {
            return il2cpp::create_object<app::VolumeEntityLocomotion>(get_class());
        }
    } // namespace VolumeEntityLocomotion
} // namespace app::classes::types
