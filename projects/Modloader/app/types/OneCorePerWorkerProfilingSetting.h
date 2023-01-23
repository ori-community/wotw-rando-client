#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OneCorePerWorkerProfilingSetting__Class.h>
#include <Modloader/app/structs/OneCorePerWorkerProfilingSetting.h>

namespace app::classes::types {
    namespace OneCorePerWorkerProfilingSetting {
        namespace {
            inline app::OneCorePerWorkerProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::OneCorePerWorkerProfilingSetting__Class** type_info = &type_info_ref;
        inline app::OneCorePerWorkerProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::OneCorePerWorkerProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "OneCorePerWorkerProfilingSetting");
        }
        inline app::OneCorePerWorkerProfilingSetting* create() {
            return il2cpp::create_object<app::OneCorePerWorkerProfilingSetting>(get_class());
        }
    } // namespace OneCorePerWorkerProfilingSetting
} // namespace app::classes::types
