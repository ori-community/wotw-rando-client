#pragma once
#include <Modloader/app/structs/EarlyZReconstructionProfilingSetting.h>
#include <Modloader/app/structs/EarlyZReconstructionProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyZReconstructionProfilingSetting {
        inline app::EarlyZReconstructionProfilingSetting__Class** type_info() {
            static app::EarlyZReconstructionProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyZReconstructionProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyZReconstructionProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::EarlyZReconstructionProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "EarlyZReconstructionProfilingSetting");
        }
        inline app::EarlyZReconstructionProfilingSetting* create() {
            return il2cpp::create_object<app::EarlyZReconstructionProfilingSetting>(get_class());
        }
    } // namespace EarlyZReconstructionProfilingSetting
} // namespace app::classes::types
