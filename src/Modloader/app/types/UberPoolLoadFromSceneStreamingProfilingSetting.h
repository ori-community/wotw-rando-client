#pragma once
#include <Modloader/app/structs/UberPoolLoadFromSceneStreamingProfilingSetting.h>
#include <Modloader/app/structs/UberPoolLoadFromSceneStreamingProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolLoadFromSceneStreamingProfilingSetting {
        inline app::UberPoolLoadFromSceneStreamingProfilingSetting__Class** type_info() {
            static app::UberPoolLoadFromSceneStreamingProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolLoadFromSceneStreamingProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolLoadFromSceneStreamingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::UberPoolLoadFromSceneStreamingProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "UberPoolLoadFromSceneStreamingProfilingSetting");
        }
        inline app::UberPoolLoadFromSceneStreamingProfilingSetting* create() {
            return il2cpp::create_object<app::UberPoolLoadFromSceneStreamingProfilingSetting>(get_class());
        }
    } // namespace UberPoolLoadFromSceneStreamingProfilingSetting
} // namespace app::classes::types
