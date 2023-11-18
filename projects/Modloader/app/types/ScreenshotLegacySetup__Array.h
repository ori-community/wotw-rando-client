#pragma once
#include <Modloader/app/structs/ScreenshotLegacySetup__Array.h>
#include <Modloader/app/structs/ScreenshotLegacySetup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotLegacySetup__Array {
        inline app::ScreenshotLegacySetup__Array__Class** type_info() {
            static app::ScreenshotLegacySetup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotLegacySetup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotLegacySetup__Array__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotLegacySetup__Array__Class>(type_info(), "", "ScreenshotLegacySetup[]");
        }
        inline app::ScreenshotLegacySetup__Array* create() {
            return il2cpp::create_object<app::ScreenshotLegacySetup__Array>(get_class());
        }
    } // namespace ScreenshotLegacySetup__Array
} // namespace app::classes::types
