#pragma once
#include <Modloader/app/structs/ScreenshotIcon__Array.h>
#include <Modloader/app/structs/ScreenshotIcon__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotIcon__Array {
        inline app::ScreenshotIcon__Array__Class** type_info() {
            static app::ScreenshotIcon__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotIcon__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotIcon__Array__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIcon__Array__Class>(type_info(), "", "ScreenshotIcon[]");
        }
        inline app::ScreenshotIcon__Array* create() {
            return il2cpp::create_object<app::ScreenshotIcon__Array>(get_class());
        }
    } // namespace ScreenshotIcon__Array
} // namespace app::classes::types
