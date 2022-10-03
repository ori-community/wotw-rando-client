#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenshotRecorder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScreenshotRecorder__Class** type_info;
        inline app::ScreenshotRecorder__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotRecorder__Class>(type_info, "moonTools.recording", "ScreenshotRecorder");
        }
        inline app::ScreenshotRecorder* create() {
            return il2cpp::create_object<app::ScreenshotRecorder>(get_class());
        }
    } // namespace ScreenshotRecorder
} // namespace app::classes::types
