#pragma once
#include <Modloader/app/structs/ScreenshotIconGroup__Enum.h>
#include <Modloader/app/structs/ScreenshotIconGroup__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotIconGroup__Enum {
        inline app::ScreenshotIconGroup__Enum__Class** type_info() {
            static app::ScreenshotIconGroup__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotIconGroup__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotIconGroup__Enum__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIconGroup__Enum__Class>(type_info(), "", "ScreenshotIconGroup");
        }
        inline app::ScreenshotIconGroup__Enum* create() {
            return il2cpp::create_object<app::ScreenshotIconGroup__Enum>(get_class());
        }
    } // namespace ScreenshotIconGroup__Enum
} // namespace app::classes::types
