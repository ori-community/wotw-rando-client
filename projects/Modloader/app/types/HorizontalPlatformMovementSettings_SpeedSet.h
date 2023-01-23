#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedSet__Class.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedSet.h>

namespace app::classes::types {
    namespace HorizontalPlatformMovementSettings_SpeedSet {
        inline app::HorizontalPlatformMovementSettings_SpeedSet__Class** type_info = (app::HorizontalPlatformMovementSettings_SpeedSet__Class**)(modloader::win::memory::resolve_rva(0x04746B60));
        inline app::HorizontalPlatformMovementSettings_SpeedSet__Class* get_class() {
            return il2cpp::get_nested_class<app::HorizontalPlatformMovementSettings_SpeedSet__Class>(type_info, "", "HorizontalPlatformMovementSettings", "SpeedSet");
        }
        inline app::HorizontalPlatformMovementSettings_SpeedSet* create() {
            return il2cpp::create_object<app::HorizontalPlatformMovementSettings_SpeedSet>(get_class());
        }
    } // namespace HorizontalPlatformMovementSettings_SpeedSet
} // namespace app::classes::types
