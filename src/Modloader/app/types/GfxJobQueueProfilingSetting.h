#pragma once
#include <Modloader/app/structs/GfxJobQueueProfilingSetting.h>
#include <Modloader/app/structs/GfxJobQueueProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GfxJobQueueProfilingSetting {
        inline app::GfxJobQueueProfilingSetting__Class** type_info() {
            static app::GfxJobQueueProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GfxJobQueueProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GfxJobQueueProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::GfxJobQueueProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "GfxJobQueueProfilingSetting");
        }
        inline app::GfxJobQueueProfilingSetting* create() {
            return il2cpp::create_object<app::GfxJobQueueProfilingSetting>(get_class());
        }
    } // namespace GfxJobQueueProfilingSetting
} // namespace app::classes::types
