#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenshotIcon_BaseIcons__Enum {
        namespace {
            inline app::ScreenshotIcon_BaseIcons__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ScreenshotIcon_BaseIcons__Enum__Class** type_info = &type_info_ref;
        inline app::ScreenshotIcon_BaseIcons__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenshotIcon_BaseIcons__Enum__Class>(type_info, "", "ScreenshotIcon", "BaseIcons");
        }
        inline app::ScreenshotIcon_BaseIcons__Enum* create() {
            return il2cpp::create_object<app::ScreenshotIcon_BaseIcons__Enum>(get_class());
        }
    } // namespace ScreenshotIcon_BaseIcons__Enum
} // namespace app::classes::types
