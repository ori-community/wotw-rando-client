#pragma once
#include <Modloader/app/structs/ScreenshotIcon_BaseIcons__Enum.h>
#include <Modloader/app/structs/ScreenshotIcon_BaseIcons__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotIcon_BaseIcons__Enum {
        inline app::ScreenshotIcon_BaseIcons__Enum__Class** type_info() {
            static app::ScreenshotIcon_BaseIcons__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotIcon_BaseIcons__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotIcon_BaseIcons__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenshotIcon_BaseIcons__Enum__Class>(type_info(), "", "ScreenshotIcon", "BaseIcons");
        }
        inline app::ScreenshotIcon_BaseIcons__Enum* create() {
            return il2cpp::create_object<app::ScreenshotIcon_BaseIcons__Enum>(get_class());
        }
    } // namespace ScreenshotIcon_BaseIcons__Enum
} // namespace app::classes::types
