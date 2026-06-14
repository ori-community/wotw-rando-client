#pragma once
#include <Modloader/app/structs/MovingPlatformSettings.h>
#include <Modloader/app/structs/MovingPlatformSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MovingPlatformSettings {
        inline app::MovingPlatformSettings__Class** type_info() {
            static app::MovingPlatformSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MovingPlatformSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MovingPlatformSettings__Class* get_class() {
            return il2cpp::get_class<app::MovingPlatformSettings__Class>(type_info(), "", "MovingPlatformSettings");
        }
        inline app::MovingPlatformSettings* create() {
            return il2cpp::create_object<app::MovingPlatformSettings>(get_class());
        }
    } // namespace MovingPlatformSettings
} // namespace app::classes::types
