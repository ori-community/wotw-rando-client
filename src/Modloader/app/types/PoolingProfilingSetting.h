#pragma once
#include <Modloader/app/structs/PoolingProfilingSetting.h>
#include <Modloader/app/structs/PoolingProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoolingProfilingSetting {
        inline app::PoolingProfilingSetting__Class** type_info() {
            static app::PoolingProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PoolingProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PoolingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::PoolingProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "PoolingProfilingSetting");
        }
        inline app::PoolingProfilingSetting* create() {
            return il2cpp::create_object<app::PoolingProfilingSetting>(get_class());
        }
    } // namespace PoolingProfilingSetting
} // namespace app::classes::types
