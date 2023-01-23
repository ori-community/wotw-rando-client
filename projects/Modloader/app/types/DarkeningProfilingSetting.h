#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DarkeningProfilingSetting__Class.h>
#include <Modloader/app/structs/DarkeningProfilingSetting.h>

namespace app::classes::types {
    namespace DarkeningProfilingSetting {
        namespace {
            inline app::DarkeningProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::DarkeningProfilingSetting__Class** type_info = &type_info_ref;
        inline app::DarkeningProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DarkeningProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "DarkeningProfilingSetting");
        }
        inline app::DarkeningProfilingSetting* create() {
            return il2cpp::create_object<app::DarkeningProfilingSetting>(get_class());
        }
    } // namespace DarkeningProfilingSetting
} // namespace app::classes::types
