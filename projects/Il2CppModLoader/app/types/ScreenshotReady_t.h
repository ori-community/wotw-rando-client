#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenshotReady_t {
        namespace {
            inline app::ScreenshotReady_t__Class* type_info_ref = nullptr;
        }
        inline app::ScreenshotReady_t__Class** type_info = &type_info_ref;
        inline app::ScreenshotReady_t__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotReady_t__Class>(type_info, "Steamworks", "ScreenshotReady_t");
        }
        inline app::ScreenshotReady_t* create() {
            return il2cpp::create_object<app::ScreenshotReady_t>(get_class());
        }
        inline app::ScreenshotReady_t__Boxed* box(app::ScreenshotReady_t value) {
            return il2cpp::box_value<app::ScreenshotReady_t__Boxed>(get_class(), value);
        }
    } // namespace ScreenshotReady_t
} // namespace app::classes::types
