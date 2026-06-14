#pragma once
#include <Modloader/app/structs/StressTester_ScreenshotState__Enum.h>
#include <Modloader/app/structs/StressTester_ScreenshotState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StressTester_ScreenshotState__Enum {
        inline app::StressTester_ScreenshotState__Enum__Class** type_info() {
            static app::StressTester_ScreenshotState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StressTester_ScreenshotState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StressTester_ScreenshotState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_ScreenshotState__Enum__Class>(type_info(), "", "StressTester", "ScreenshotState");
        }
        inline app::StressTester_ScreenshotState__Enum* create() {
            return il2cpp::create_object<app::StressTester_ScreenshotState__Enum>(get_class());
        }
    } // namespace StressTester_ScreenshotState__Enum
} // namespace app::classes::types
