#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenshotRequested_t {
        namespace {
            inline app::ScreenshotRequested_t__Class* type_info_ref = nullptr;
        }
        inline app::ScreenshotRequested_t__Class** type_info = &type_info_ref;
        inline app::ScreenshotRequested_t__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotRequested_t__Class>(type_info, "Steamworks", "ScreenshotRequested_t");
        }
        inline app::ScreenshotRequested_t* create() {
            return il2cpp::create_object<app::ScreenshotRequested_t>(get_class());
        }
        inline app::ScreenshotRequested_t__Boxed* box(app::ScreenshotRequested_t value) {
            return il2cpp::box_value<app::ScreenshotRequested_t__Boxed>(get_class(), value);
        }
    } // namespace ScreenshotRequested_t
} // namespace app::classes::types
