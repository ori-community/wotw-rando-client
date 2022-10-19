#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TakeScreenshotsDuringDynamicTestProfilingSetting {
        namespace {
            inline app::TakeScreenshotsDuringDynamicTestProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::TakeScreenshotsDuringDynamicTestProfilingSetting__Class** type_info = &type_info_ref;
        inline app::TakeScreenshotsDuringDynamicTestProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::TakeScreenshotsDuringDynamicTestProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "TakeScreenshotsDuringDynamicTestProfilingSetting");
        }
        inline app::TakeScreenshotsDuringDynamicTestProfilingSetting* create() {
            return il2cpp::create_object<app::TakeScreenshotsDuringDynamicTestProfilingSetting>(get_class());
        }
    } // namespace TakeScreenshotsDuringDynamicTestProfilingSetting
} // namespace app::classes::types
