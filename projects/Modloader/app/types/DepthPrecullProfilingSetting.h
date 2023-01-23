#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DepthPrecullProfilingSetting__Class.h>
#include <Modloader/app/structs/DepthPrecullProfilingSetting.h>

namespace app::classes::types {
    namespace DepthPrecullProfilingSetting {
        namespace {
            inline app::DepthPrecullProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::DepthPrecullProfilingSetting__Class** type_info = &type_info_ref;
        inline app::DepthPrecullProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DepthPrecullProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "DepthPrecullProfilingSetting");
        }
        inline app::DepthPrecullProfilingSetting* create() {
            return il2cpp::create_object<app::DepthPrecullProfilingSetting>(get_class());
        }
    } // namespace DepthPrecullProfilingSetting
} // namespace app::classes::types
