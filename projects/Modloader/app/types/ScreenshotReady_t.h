#pragma once
#include <Modloader/app/structs/ScreenshotReady_t.h>
#include <Modloader/app/structs/ScreenshotReady_t__Boxed.h>
#include <Modloader/app/structs/ScreenshotReady_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotReady_t {
        inline app::ScreenshotReady_t__Class** type_info() {
            static app::ScreenshotReady_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotReady_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotReady_t__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotReady_t__Class>(type_info(), "Steamworks", "ScreenshotReady_t");
        }
        inline app::ScreenshotReady_t* create() {
            return il2cpp::create_object<app::ScreenshotReady_t>(get_class());
        }
        inline app::ScreenshotReady_t__Boxed* box(app::ScreenshotReady_t value) {
            return il2cpp::box_value<app::ScreenshotReady_t__Boxed>(get_class(), value);
        }
    } // namespace ScreenshotReady_t
} // namespace app::classes::types
