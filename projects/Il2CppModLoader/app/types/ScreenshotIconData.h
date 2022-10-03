#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenshotIconData {
        namespace {
            app::ScreenshotIconData__Class* type_info_ref = nullptr;
        }
        app::ScreenshotIconData__Class** type_info = &type_info_ref;
        inline app::ScreenshotIconData__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIconData__Class>(type_info, "", "ScreenshotIconData");
        }
        inline app::ScreenshotIconData* create() {
            return il2cpp::create_object<app::ScreenshotIconData>(get_class());
        }
        inline app::ScreenshotIconData__Array* create_array(int size) {
            return il2cpp::array_new<app::ScreenshotIconData__Array>(get_class(), size);
        }
    } // namespace ScreenshotIconData
} // namespace app::classes::types
