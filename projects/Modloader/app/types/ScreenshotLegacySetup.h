#pragma once
#include <Modloader/app/structs/ScreenshotLegacySetup.h>
#include <Modloader/app/structs/ScreenshotLegacySetup__Array.h>
#include <Modloader/app/structs/ScreenshotLegacySetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotLegacySetup {
        inline app::ScreenshotLegacySetup__Class** type_info() {
            static app::ScreenshotLegacySetup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotLegacySetup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotLegacySetup__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotLegacySetup__Class>(type_info(), "", "ScreenshotLegacySetup");
        }
        inline app::ScreenshotLegacySetup* create() {
            return il2cpp::create_object<app::ScreenshotLegacySetup>(get_class());
        }
        inline app::ScreenshotLegacySetup__Array* create_array(int size) {
            return il2cpp::array_new<app::ScreenshotLegacySetup__Array>(get_class(), size);
        }
        inline app::ScreenshotLegacySetup__Array* create_array(const std::vector<app::ScreenshotLegacySetup*>& items) {
            return il2cpp::array_new<app::ScreenshotLegacySetup__Array>(get_class(), items);
        }
    } // namespace ScreenshotLegacySetup
} // namespace app::classes::types
