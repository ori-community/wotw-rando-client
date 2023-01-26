#pragma once
#include <Modloader/app/structs/ScreenshotIconData.h>
#include <Modloader/app/structs/ScreenshotIconData__Array.h>
#include <Modloader/app/structs/ScreenshotIconData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotIconData {
        inline app::ScreenshotIconData__Class** type_info() {
            static app::ScreenshotIconData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotIconData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotIconData__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIconData__Class>(type_info(), "", "ScreenshotIconData");
        }
        inline app::ScreenshotIconData* create() {
            return il2cpp::create_object<app::ScreenshotIconData>(get_class());
        }
        inline app::ScreenshotIconData__Array* create_array(int size) {
            return il2cpp::array_new<app::ScreenshotIconData__Array>(get_class(), size);
        }
        inline app::ScreenshotIconData__Array* create_array(const std::vector<app::ScreenshotIconData*>& items) {
            return il2cpp::array_new<app::ScreenshotIconData__Array>(get_class(), items);
        }
    } // namespace ScreenshotIconData
} // namespace app::classes::types
