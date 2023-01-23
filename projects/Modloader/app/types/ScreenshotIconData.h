#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScreenshotIconData__Class.h>
#include <Modloader/app/structs/ScreenshotIconData.h>
#include <Modloader/app/structs/ScreenshotIconData__Array.h>

namespace app::classes::types {
    namespace ScreenshotIconData {
        namespace {
            inline app::ScreenshotIconData__Class* type_info_ref = nullptr;
        }
        inline app::ScreenshotIconData__Class** type_info = &type_info_ref;
        inline app::ScreenshotIconData__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIconData__Class>(type_info, "", "ScreenshotIconData");
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
