#pragma once
#include <Modloader/app/structs/AllowCoreTwoWorkerOnCoreZeroProfilingSetting.h>
#include <Modloader/app/structs/AllowCoreTwoWorkerOnCoreZeroProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AllowCoreTwoWorkerOnCoreZeroProfilingSetting {
        inline app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting__Class** type_info() {
            static app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "AllowCoreTwoWorkerOnCoreZeroProfilingSetting");
        }
        inline app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting* create() {
            return il2cpp::create_object<app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting>(get_class());
        }
    } // namespace AllowCoreTwoWorkerOnCoreZeroProfilingSetting
} // namespace app::classes::types
