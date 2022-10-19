#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnableSimpleFPSProfilingSetting {
        namespace {
            inline app::EnableSimpleFPSProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::EnableSimpleFPSProfilingSetting__Class** type_info = &type_info_ref;
        inline app::EnableSimpleFPSProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::EnableSimpleFPSProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "EnableSimpleFPSProfilingSetting");
        }
        inline app::EnableSimpleFPSProfilingSetting* create() {
            return il2cpp::create_object<app::EnableSimpleFPSProfilingSetting>(get_class());
        }
    } // namespace EnableSimpleFPSProfilingSetting
} // namespace app::classes::types
