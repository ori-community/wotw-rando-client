#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenshotIcon {
        namespace {
            app::ScreenshotIcon__Class* type_info_ref = nullptr;
        }
        app::ScreenshotIcon__Class** type_info = &type_info_ref;
        inline app::ScreenshotIcon__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIcon__Class>(type_info, "", "ScreenshotIcon");
        }
        inline app::ScreenshotIcon* create() {
            return il2cpp::create_object<app::ScreenshotIcon>(get_class());
        }
        inline app::ScreenshotIcon__Array* create_array(int size) {
            return il2cpp::array_new<app::ScreenshotIcon__Array>(get_class(), size);
        }
    } // namespace ScreenshotIcon
} // namespace app::classes::types
