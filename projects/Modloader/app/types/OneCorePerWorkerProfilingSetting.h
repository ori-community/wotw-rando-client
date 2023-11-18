#pragma once
#include <Modloader/app/structs/OneCorePerWorkerProfilingSetting.h>
#include <Modloader/app/structs/OneCorePerWorkerProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneCorePerWorkerProfilingSetting {
        inline app::OneCorePerWorkerProfilingSetting__Class** type_info() {
            static app::OneCorePerWorkerProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OneCorePerWorkerProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OneCorePerWorkerProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::OneCorePerWorkerProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "OneCorePerWorkerProfilingSetting");
        }
        inline app::OneCorePerWorkerProfilingSetting* create() {
            return il2cpp::create_object<app::OneCorePerWorkerProfilingSetting>(get_class());
        }
    } // namespace OneCorePerWorkerProfilingSetting
} // namespace app::classes::types
