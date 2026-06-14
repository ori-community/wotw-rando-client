#pragma once
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HorizontalPlatformMovementSettings {
        inline app::HorizontalPlatformMovementSettings__Class** type_info() {
            static app::HorizontalPlatformMovementSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HorizontalPlatformMovementSettings__Class**)(modloader::win::memory::resolve_rva(0x0475E988));
            }
            return cache;
        }
        inline app::HorizontalPlatformMovementSettings__Class* get_class() {
            return il2cpp::get_class<app::HorizontalPlatformMovementSettings__Class>(type_info(), "", "HorizontalPlatformMovementSettings");
        }
        inline app::HorizontalPlatformMovementSettings* create() {
            return il2cpp::create_object<app::HorizontalPlatformMovementSettings>(get_class());
        }
    } // namespace HorizontalPlatformMovementSettings
} // namespace app::classes::types
