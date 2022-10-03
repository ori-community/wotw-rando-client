#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenshotIconMarker {
        namespace {
            app::ScreenshotIconMarker__Class* type_info_ref = nullptr;
        }
        app::ScreenshotIconMarker__Class** type_info = &type_info_ref;
        inline app::ScreenshotIconMarker__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIconMarker__Class>(type_info, "", "ScreenshotIconMarker");
        }
        inline app::ScreenshotIconMarker* create() {
            return il2cpp::create_object<app::ScreenshotIconMarker>(get_class());
        }
    } // namespace ScreenshotIconMarker
} // namespace app::classes::types
