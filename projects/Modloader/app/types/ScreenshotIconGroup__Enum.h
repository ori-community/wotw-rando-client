#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenshotIconGroup__Enum {
        namespace {
            inline app::ScreenshotIconGroup__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ScreenshotIconGroup__Enum__Class** type_info = &type_info_ref;
        inline app::ScreenshotIconGroup__Enum__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIconGroup__Enum__Class>(type_info, "", "ScreenshotIconGroup");
        }
        inline app::ScreenshotIconGroup__Enum* create() {
            return il2cpp::create_object<app::ScreenshotIconGroup__Enum>(get_class());
        }
    } // namespace ScreenshotIconGroup__Enum
} // namespace app::classes::types
