#pragma once
#include <Modloader/app/structs/SaveSlotsScreenshotManager_ScreenshotPair__Array.h>
#include <Modloader/app/structs/SaveSlotsScreenshotManager_ScreenshotPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsScreenshotManager_ScreenshotPair__Array {
        inline app::SaveSlotsScreenshotManager_ScreenshotPair__Array__Class** type_info() {
            static app::SaveSlotsScreenshotManager_ScreenshotPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SaveSlotsScreenshotManager_ScreenshotPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SaveSlotsScreenshotManager_ScreenshotPair__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotsScreenshotManager_ScreenshotPair__Array__Class>(type_info(), "", "SaveSlotsScreenshotManager+ScreenshotPair[]");
        }
        inline app::SaveSlotsScreenshotManager_ScreenshotPair__Array* create() {
            return il2cpp::create_object<app::SaveSlotsScreenshotManager_ScreenshotPair__Array>(get_class());
        }
    } // namespace SaveSlotsScreenshotManager_ScreenshotPair__Array
} // namespace app::classes::types
