#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenshotText {
        namespace {
            app::ScreenshotText__Class* type_info_ref = nullptr;
        }
        app::ScreenshotText__Class** type_info = &type_info_ref;
        inline app::ScreenshotText__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotText__Class>(type_info, "", "ScreenshotText");
        }
        inline app::ScreenshotText* create() {
            return il2cpp::create_object<app::ScreenshotText>(get_class());
        }
        inline app::ScreenshotText__Array* create_array(int size) {
            return il2cpp::array_new<app::ScreenshotText__Array>(get_class(), size);
        }
    } // namespace ScreenshotText
} // namespace app::classes::types
