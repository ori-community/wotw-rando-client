#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RefractionProfilingSetting__Class.h>
#include <Modloader/app/structs/RefractionProfilingSetting.h>

namespace app::classes::types {
    namespace RefractionProfilingSetting {
        namespace {
            inline app::RefractionProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::RefractionProfilingSetting__Class** type_info = &type_info_ref;
        inline app::RefractionProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::RefractionProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "RefractionProfilingSetting");
        }
        inline app::RefractionProfilingSetting* create() {
            return il2cpp::create_object<app::RefractionProfilingSetting>(get_class());
        }
    } // namespace RefractionProfilingSetting
} // namespace app::classes::types
