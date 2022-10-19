#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FreezeColorVariationProfilingSetting {
        namespace {
            inline app::FreezeColorVariationProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::FreezeColorVariationProfilingSetting__Class** type_info = &type_info_ref;
        inline app::FreezeColorVariationProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::FreezeColorVariationProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "FreezeColorVariationProfilingSetting");
        }
        inline app::FreezeColorVariationProfilingSetting* create() {
            return il2cpp::create_object<app::FreezeColorVariationProfilingSetting>(get_class());
        }
    } // namespace FreezeColorVariationProfilingSetting
} // namespace app::classes::types
