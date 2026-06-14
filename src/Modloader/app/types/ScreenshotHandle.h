#pragma once
#include <Modloader/app/structs/ScreenshotHandle.h>
#include <Modloader/app/structs/ScreenshotHandle__Boxed.h>
#include <Modloader/app/structs/ScreenshotHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotHandle {
        inline app::ScreenshotHandle__Class** type_info() {
            static app::ScreenshotHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScreenshotHandle__Class**)(modloader::win::memory::resolve_rva(0x04787F58));
            }
            return cache;
        }
        inline app::ScreenshotHandle__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotHandle__Class>(type_info(), "Steamworks", "ScreenshotHandle");
        }
        inline app::ScreenshotHandle* create() {
            return il2cpp::create_object<app::ScreenshotHandle>(get_class());
        }
        inline app::ScreenshotHandle__Boxed* box(app::ScreenshotHandle value) {
            return il2cpp::box_value<app::ScreenshotHandle__Boxed>(get_class(), value);
        }
    } // namespace ScreenshotHandle
} // namespace app::classes::types
