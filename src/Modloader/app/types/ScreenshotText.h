#pragma once
#include <Modloader/app/structs/ScreenshotText.h>
#include <Modloader/app/structs/ScreenshotText__Array.h>
#include <Modloader/app/structs/ScreenshotText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotText {
        inline app::ScreenshotText__Class** type_info() {
            static app::ScreenshotText__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotText__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotText__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotText__Class>(type_info(), "", "ScreenshotText");
        }
        inline app::ScreenshotText* create() {
            return il2cpp::create_object<app::ScreenshotText>(get_class());
        }
        inline app::ScreenshotText__Array* create_array(int size) {
            return il2cpp::array_new<app::ScreenshotText__Array>(get_class(), size);
        }
        inline app::ScreenshotText__Array* create_array(const std::vector<app::ScreenshotText*>& items) {
            return il2cpp::array_new<app::ScreenshotText__Array>(get_class(), items);
        }
    } // namespace ScreenshotText
} // namespace app::classes::types
