#pragma once
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GravityPlatformMovementSettings {
        inline app::GravityPlatformMovementSettings__Class** type_info() {
            static app::GravityPlatformMovementSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GravityPlatformMovementSettings__Class**)(modloader::win::memory::resolve_rva(0x04717C90));
            }
            return cache;
        }
        inline app::GravityPlatformMovementSettings__Class* get_class() {
            return il2cpp::get_class<app::GravityPlatformMovementSettings__Class>(type_info(), "", "GravityPlatformMovementSettings");
        }
        inline app::GravityPlatformMovementSettings* create() {
            return il2cpp::create_object<app::GravityPlatformMovementSettings>(get_class());
        }
    } // namespace GravityPlatformMovementSettings
} // namespace app::classes::types
