#pragma once
#include <Modloader/app/structs/ScreenshotRecorder.h>
#include <Modloader/app/structs/ScreenshotRecorder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotRecorder {
        inline app::ScreenshotRecorder__Class** type_info() {
            static app::ScreenshotRecorder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScreenshotRecorder__Class**)(modloader::win::memory::resolve_rva(0x04768C00));
            }
            return cache;
        }
        inline app::ScreenshotRecorder__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotRecorder__Class>(type_info(), "moonTools.recording", "ScreenshotRecorder");
        }
        inline app::ScreenshotRecorder* create() {
            return il2cpp::create_object<app::ScreenshotRecorder>(get_class());
        }
    } // namespace ScreenshotRecorder
} // namespace app::classes::types
