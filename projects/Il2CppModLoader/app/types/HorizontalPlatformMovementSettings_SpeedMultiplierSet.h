#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HorizontalPlatformMovementSettings_SpeedMultiplierSet {
        inline app::HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class** type_info = (app::HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class**)(modloader::win::memory::resolve_rva(0x04751698));
        inline app::HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class* get_class() {
            return il2cpp::get_nested_class<app::HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class>(type_info, "", "HorizontalPlatformMovementSettings", "SpeedMultiplierSet");
        }
        inline app::HorizontalPlatformMovementSettings_SpeedMultiplierSet* create() {
            return il2cpp::create_object<app::HorizontalPlatformMovementSettings_SpeedMultiplierSet>(get_class());
        }
    } // namespace HorizontalPlatformMovementSettings_SpeedMultiplierSet
} // namespace app::classes::types
