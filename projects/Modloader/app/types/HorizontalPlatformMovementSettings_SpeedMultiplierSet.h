#pragma once
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedMultiplierSet.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HorizontalPlatformMovementSettings_SpeedMultiplierSet {
        inline app::HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class** type_info() {
            static app::HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class**)(modloader::win::memory::resolve_rva(0x04751698));
            }
            return cache;
        }
        inline app::HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class* get_class() {
            return il2cpp::get_nested_class<app::HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class>(type_info(), "", "HorizontalPlatformMovementSettings", "SpeedMultiplierSet");
        }
        inline app::HorizontalPlatformMovementSettings_SpeedMultiplierSet* create() {
            return il2cpp::create_object<app::HorizontalPlatformMovementSettings_SpeedMultiplierSet>(get_class());
        }
    } // namespace HorizontalPlatformMovementSettings_SpeedMultiplierSet
} // namespace app::classes::types
