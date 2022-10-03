#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HorizontalPlatformMovementSettings_SpeedMultiplierSet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class** type_info;
        inline app::HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class* get_class() {
            return il2cpp::get_nested_class<app::HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class>(type_info, "", "HorizontalPlatformMovementSettings", "SpeedMultiplierSet");
        }
        inline app::HorizontalPlatformMovementSettings_SpeedMultiplierSet* create() {
            return il2cpp::create_object<app::HorizontalPlatformMovementSettings_SpeedMultiplierSet>(get_class());
        }
    } // namespace HorizontalPlatformMovementSettings_SpeedMultiplierSet
} // namespace app::classes::types
