#pragma once
#include <Modloader/app/structs/ScreenshotRequested_t.h>
#include <Modloader/app/structs/ScreenshotRequested_t__Boxed.h>
#include <Modloader/app/structs/ScreenshotRequested_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotRequested_t {
        inline app::ScreenshotRequested_t__Class** type_info() {
            static app::ScreenshotRequested_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotRequested_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotRequested_t__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotRequested_t__Class>(type_info(), "Steamworks", "ScreenshotRequested_t");
        }
        inline app::ScreenshotRequested_t* create() {
            return il2cpp::create_object<app::ScreenshotRequested_t>(get_class());
        }
        inline app::ScreenshotRequested_t__Boxed* box(app::ScreenshotRequested_t value) {
            return il2cpp::box_value<app::ScreenshotRequested_t__Boxed>(get_class(), value);
        }
    } // namespace ScreenshotRequested_t
} // namespace app::classes::types
