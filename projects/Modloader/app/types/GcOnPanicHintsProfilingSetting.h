#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GcOnPanicHintsProfilingSetting__Class.h>
#include <Modloader/app/structs/GcOnPanicHintsProfilingSetting.h>

namespace app::classes::types {
    namespace GcOnPanicHintsProfilingSetting {
        namespace {
            inline app::GcOnPanicHintsProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::GcOnPanicHintsProfilingSetting__Class** type_info = &type_info_ref;
        inline app::GcOnPanicHintsProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::GcOnPanicHintsProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "GcOnPanicHintsProfilingSetting");
        }
        inline app::GcOnPanicHintsProfilingSetting* create() {
            return il2cpp::create_object<app::GcOnPanicHintsProfilingSetting>(get_class());
        }
    } // namespace GcOnPanicHintsProfilingSetting
} // namespace app::classes::types
