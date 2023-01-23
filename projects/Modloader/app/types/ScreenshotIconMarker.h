#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScreenshotIconMarker__Class.h>
#include <Modloader/app/structs/ScreenshotIconMarker.h>

namespace app::classes::types {
    namespace ScreenshotIconMarker {
        namespace {
            inline app::ScreenshotIconMarker__Class* type_info_ref = nullptr;
        }
        inline app::ScreenshotIconMarker__Class** type_info = &type_info_ref;
        inline app::ScreenshotIconMarker__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIconMarker__Class>(type_info, "", "ScreenshotIconMarker");
        }
        inline app::ScreenshotIconMarker* create() {
            return il2cpp::create_object<app::ScreenshotIconMarker>(get_class());
        }
    } // namespace ScreenshotIconMarker
} // namespace app::classes::types
