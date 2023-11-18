#pragma once
#include <Modloader/app/structs/StressTester_ScreenshotMethod__Enum.h>
#include <Modloader/app/structs/StressTester_ScreenshotMethod__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StressTester_ScreenshotMethod__Enum {
        inline app::StressTester_ScreenshotMethod__Enum__Class** type_info() {
            static app::StressTester_ScreenshotMethod__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StressTester_ScreenshotMethod__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StressTester_ScreenshotMethod__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_ScreenshotMethod__Enum__Class>(type_info(), "", "StressTester", "ScreenshotMethod");
        }
        inline app::StressTester_ScreenshotMethod__Enum* create() {
            return il2cpp::create_object<app::StressTester_ScreenshotMethod__Enum>(get_class());
        }
    } // namespace StressTester_ScreenshotMethod__Enum
} // namespace app::classes::types
