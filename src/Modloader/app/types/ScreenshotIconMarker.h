#pragma once
#include <Modloader/app/structs/ScreenshotIconMarker.h>
#include <Modloader/app/structs/ScreenshotIconMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotIconMarker {
        inline app::ScreenshotIconMarker__Class** type_info() {
            static app::ScreenshotIconMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotIconMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotIconMarker__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIconMarker__Class>(type_info(), "", "ScreenshotIconMarker");
        }
        inline app::ScreenshotIconMarker* create() {
            return il2cpp::create_object<app::ScreenshotIconMarker>(get_class());
        }
    } // namespace ScreenshotIconMarker
} // namespace app::classes::types
