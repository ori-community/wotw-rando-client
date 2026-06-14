#pragma once
#include <Modloader/app/structs/ScreenshotTextMarker.h>
#include <Modloader/app/structs/ScreenshotTextMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotTextMarker {
        inline app::ScreenshotTextMarker__Class** type_info() {
            static app::ScreenshotTextMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotTextMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotTextMarker__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotTextMarker__Class>(type_info(), "", "ScreenshotTextMarker");
        }
        inline app::ScreenshotTextMarker* create() {
            return il2cpp::create_object<app::ScreenshotTextMarker>(get_class());
        }
    } // namespace ScreenshotTextMarker
} // namespace app::classes::types
