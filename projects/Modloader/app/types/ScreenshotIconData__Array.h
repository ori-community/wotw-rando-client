#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScreenshotIconData__Array__Class.h>
#include <Modloader/app/structs/ScreenshotIconData__Array.h>

namespace app::classes::types {
    namespace ScreenshotIconData__Array {
        namespace {
            inline app::ScreenshotIconData__Array__Class* type_info_ref = nullptr;
        }
        inline app::ScreenshotIconData__Array__Class** type_info = &type_info_ref;
        inline app::ScreenshotIconData__Array__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIconData__Array__Class>(type_info, "", "ScreenshotIconData[]");
        }
        inline app::ScreenshotIconData__Array* create() {
            return il2cpp::create_object<app::ScreenshotIconData__Array>(get_class());
        }
    } // namespace ScreenshotIconData__Array
} // namespace app::classes::types
