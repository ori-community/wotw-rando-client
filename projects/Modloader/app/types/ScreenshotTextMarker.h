#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenshotTextMarker {
        namespace {
            inline app::ScreenshotTextMarker__Class* type_info_ref = nullptr;
        }
        inline app::ScreenshotTextMarker__Class** type_info = &type_info_ref;
        inline app::ScreenshotTextMarker__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotTextMarker__Class>(type_info, "", "ScreenshotTextMarker");
        }
        inline app::ScreenshotTextMarker* create() {
            return il2cpp::create_object<app::ScreenshotTextMarker>(get_class());
        }
    } // namespace ScreenshotTextMarker
} // namespace app::classes::types
