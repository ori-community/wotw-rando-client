#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PanicHintsProfilingSetting__Class.h>
#include <Modloader/app/structs/PanicHintsProfilingSetting.h>

namespace app::classes::types {
    namespace PanicHintsProfilingSetting {
        namespace {
            inline app::PanicHintsProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::PanicHintsProfilingSetting__Class** type_info = &type_info_ref;
        inline app::PanicHintsProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::PanicHintsProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "PanicHintsProfilingSetting");
        }
        inline app::PanicHintsProfilingSetting* create() {
            return il2cpp::create_object<app::PanicHintsProfilingSetting>(get_class());
        }
    } // namespace PanicHintsProfilingSetting
} // namespace app::classes::types
