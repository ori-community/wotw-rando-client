#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MovingPlatformSettings {
        namespace {
            inline app::MovingPlatformSettings__Class* type_info_ref = nullptr;
        }
        inline app::MovingPlatformSettings__Class** type_info = &type_info_ref;
        inline app::MovingPlatformSettings__Class* get_class() {
            return il2cpp::get_class<app::MovingPlatformSettings__Class>(type_info, "", "MovingPlatformSettings");
        }
        inline app::MovingPlatformSettings* create() {
            return il2cpp::create_object<app::MovingPlatformSettings>(get_class());
        }
    } // namespace MovingPlatformSettings
} // namespace app::classes::types
