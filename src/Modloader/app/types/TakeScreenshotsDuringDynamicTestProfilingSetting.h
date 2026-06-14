#pragma once
#include <Modloader/app/structs/TakeScreenshotsDuringDynamicTestProfilingSetting.h>
#include <Modloader/app/structs/TakeScreenshotsDuringDynamicTestProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TakeScreenshotsDuringDynamicTestProfilingSetting {
        inline app::TakeScreenshotsDuringDynamicTestProfilingSetting__Class** type_info() {
            static app::TakeScreenshotsDuringDynamicTestProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TakeScreenshotsDuringDynamicTestProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TakeScreenshotsDuringDynamicTestProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::TakeScreenshotsDuringDynamicTestProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "TakeScreenshotsDuringDynamicTestProfilingSetting");
        }
        inline app::TakeScreenshotsDuringDynamicTestProfilingSetting* create() {
            return il2cpp::create_object<app::TakeScreenshotsDuringDynamicTestProfilingSetting>(get_class());
        }
    } // namespace TakeScreenshotsDuringDynamicTestProfilingSetting
} // namespace app::classes::types
