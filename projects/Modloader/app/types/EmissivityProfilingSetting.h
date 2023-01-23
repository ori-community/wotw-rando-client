#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EmissivityProfilingSetting__Class.h>
#include <Modloader/app/structs/EmissivityProfilingSetting.h>

namespace app::classes::types {
    namespace EmissivityProfilingSetting {
        namespace {
            inline app::EmissivityProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::EmissivityProfilingSetting__Class** type_info = &type_info_ref;
        inline app::EmissivityProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::EmissivityProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "EmissivityProfilingSetting");
        }
        inline app::EmissivityProfilingSetting* create() {
            return il2cpp::create_object<app::EmissivityProfilingSetting>(get_class());
        }
    } // namespace EmissivityProfilingSetting
} // namespace app::classes::types
