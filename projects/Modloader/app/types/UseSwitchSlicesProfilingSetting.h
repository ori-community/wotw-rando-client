#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UseSwitchSlicesProfilingSetting__Class.h>
#include <Modloader/app/structs/UseSwitchSlicesProfilingSetting.h>

namespace app::classes::types {
    namespace UseSwitchSlicesProfilingSetting {
        namespace {
            inline app::UseSwitchSlicesProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::UseSwitchSlicesProfilingSetting__Class** type_info = &type_info_ref;
        inline app::UseSwitchSlicesProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::UseSwitchSlicesProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "UseSwitchSlicesProfilingSetting");
        }
        inline app::UseSwitchSlicesProfilingSetting* create() {
            return il2cpp::create_object<app::UseSwitchSlicesProfilingSetting>(get_class());
        }
    } // namespace UseSwitchSlicesProfilingSetting
} // namespace app::classes::types
