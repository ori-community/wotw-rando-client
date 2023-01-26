#pragma once
#include <Modloader/app/structs/ScreenshotIconData__Array.h>
#include <Modloader/app/structs/ScreenshotIconData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotIconData__Array {
        inline app::ScreenshotIconData__Array__Class** type_info() {
            static app::ScreenshotIconData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotIconData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotIconData__Array__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIconData__Array__Class>(type_info(), "", "ScreenshotIconData[]");
        }
        inline app::ScreenshotIconData__Array* create() {
            return il2cpp::create_object<app::ScreenshotIconData__Array>(get_class());
        }
    } // namespace ScreenshotIconData__Array
} // namespace app::classes::types
