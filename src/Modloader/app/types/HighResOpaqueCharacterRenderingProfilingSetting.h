#pragma once
#include <Modloader/app/structs/HighResOpaqueCharacterRenderingProfilingSetting.h>
#include <Modloader/app/structs/HighResOpaqueCharacterRenderingProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HighResOpaqueCharacterRenderingProfilingSetting {
        inline app::HighResOpaqueCharacterRenderingProfilingSetting__Class** type_info() {
            static app::HighResOpaqueCharacterRenderingProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HighResOpaqueCharacterRenderingProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HighResOpaqueCharacterRenderingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::HighResOpaqueCharacterRenderingProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "HighResOpaqueCharacterRenderingProfilingSetting");
        }
        inline app::HighResOpaqueCharacterRenderingProfilingSetting* create() {
            return il2cpp::create_object<app::HighResOpaqueCharacterRenderingProfilingSetting>(get_class());
        }
    } // namespace HighResOpaqueCharacterRenderingProfilingSetting
} // namespace app::classes::types
