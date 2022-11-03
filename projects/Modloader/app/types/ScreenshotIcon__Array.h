#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenshotIcon__Array {
        namespace {
            inline app::ScreenshotIcon__Array__Class* type_info_ref = nullptr;
        }
        inline app::ScreenshotIcon__Array__Class** type_info = &type_info_ref;
        inline app::ScreenshotIcon__Array__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIcon__Array__Class>(type_info, "", "ScreenshotIcon[]");
        }
        inline app::ScreenshotIcon__Array* create() {
            return il2cpp::create_object<app::ScreenshotIcon__Array>(get_class());
        }
    } // namespace ScreenshotIcon__Array
} // namespace app::classes::types
