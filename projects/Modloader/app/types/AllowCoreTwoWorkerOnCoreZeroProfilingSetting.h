#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AllowCoreTwoWorkerOnCoreZeroProfilingSetting__Class.h>
#include <Modloader/app/structs/AllowCoreTwoWorkerOnCoreZeroProfilingSetting.h>

namespace app::classes::types {
    namespace AllowCoreTwoWorkerOnCoreZeroProfilingSetting {
        namespace {
            inline app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting__Class** type_info = &type_info_ref;
        inline app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "AllowCoreTwoWorkerOnCoreZeroProfilingSetting");
        }
        inline app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting* create() {
            return il2cpp::create_object<app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting>(get_class());
        }
    } // namespace AllowCoreTwoWorkerOnCoreZeroProfilingSetting
} // namespace app::classes::types
