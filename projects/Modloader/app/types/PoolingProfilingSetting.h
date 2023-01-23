#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PoolingProfilingSetting__Class.h>
#include <Modloader/app/structs/PoolingProfilingSetting.h>

namespace app::classes::types {
    namespace PoolingProfilingSetting {
        namespace {
            inline app::PoolingProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::PoolingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::PoolingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::PoolingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "PoolingProfilingSetting");
        }
        inline app::PoolingProfilingSetting* create() {
            return il2cpp::create_object<app::PoolingProfilingSetting>(get_class());
        }
    } // namespace PoolingProfilingSetting
} // namespace app::classes::types
