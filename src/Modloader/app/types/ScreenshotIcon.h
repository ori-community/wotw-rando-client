#pragma once
#include <Modloader/app/structs/ScreenshotIcon.h>
#include <Modloader/app/structs/ScreenshotIcon__Array.h>
#include <Modloader/app/structs/ScreenshotIcon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotIcon {
        inline app::ScreenshotIcon__Class** type_info() {
            static app::ScreenshotIcon__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotIcon__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotIcon__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIcon__Class>(type_info(), "", "ScreenshotIcon");
        }
        inline app::ScreenshotIcon* create() {
            return il2cpp::create_object<app::ScreenshotIcon>(get_class());
        }
        inline app::ScreenshotIcon__Array* create_array(int size) {
            return il2cpp::array_new<app::ScreenshotIcon__Array>(get_class(), size);
        }
        inline app::ScreenshotIcon__Array* create_array(const std::vector<app::ScreenshotIcon*>& items) {
            return il2cpp::array_new<app::ScreenshotIcon__Array>(get_class(), items);
        }
    } // namespace ScreenshotIcon
} // namespace app::classes::types
