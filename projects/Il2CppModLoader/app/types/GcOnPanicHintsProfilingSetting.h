#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
