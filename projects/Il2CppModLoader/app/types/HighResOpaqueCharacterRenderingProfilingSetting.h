#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HighResOpaqueCharacterRenderingProfilingSetting {
        namespace {
            app::HighResOpaqueCharacterRenderingProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::HighResOpaqueCharacterRenderingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::HighResOpaqueCharacterRenderingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::HighResOpaqueCharacterRenderingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "HighResOpaqueCharacterRenderingProfilingSetting");
        }
        inline app::HighResOpaqueCharacterRenderingProfilingSetting* create() {
            return il2cpp::create_object<app::HighResOpaqueCharacterRenderingProfilingSetting>(get_class());
        }
    } // namespace HighResOpaqueCharacterRenderingProfilingSetting
} // namespace app::classes::types
