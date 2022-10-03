#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenshotText__Array {
        namespace {
            app::ScreenshotText__Array__Class* type_info_ref = nullptr;
        }
        app::ScreenshotText__Array__Class** type_info = &type_info_ref;
        inline app::ScreenshotText__Array__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotText__Array__Class>(type_info, "", "ScreenshotText[]");
        }
        inline app::ScreenshotText__Array* create() {
            return il2cpp::create_object<app::ScreenshotText__Array>(get_class());
        }
    } // namespace ScreenshotText__Array
} // namespace app::classes::types
