#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenshotTextMarker {
        namespace {
            app::ScreenshotTextMarker__Class* type_info_ref = nullptr;
        }
        app::ScreenshotTextMarker__Class** type_info = &type_info_ref;
        inline app::ScreenshotTextMarker__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotTextMarker__Class>(type_info, "", "ScreenshotTextMarker");
        }
        inline app::ScreenshotTextMarker* create() {
            return il2cpp::create_object<app::ScreenshotTextMarker>(get_class());
        }
    } // namespace ScreenshotTextMarker
} // namespace app::classes::types
