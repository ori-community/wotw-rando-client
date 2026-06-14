#pragma once
#include <Modloader/app/structs/SaveSlotsScreenshotManager_ScreenshotPair.h>
#include <Modloader/app/structs/SaveSlotsScreenshotManager_ScreenshotPair__Array.h>
#include <Modloader/app/structs/SaveSlotsScreenshotManager_ScreenshotPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsScreenshotManager_ScreenshotPair {
        inline app::SaveSlotsScreenshotManager_ScreenshotPair__Class** type_info() {
            static app::SaveSlotsScreenshotManager_ScreenshotPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SaveSlotsScreenshotManager_ScreenshotPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SaveSlotsScreenshotManager_ScreenshotPair__Class* get_class() {
            return il2cpp::get_nested_class<app::SaveSlotsScreenshotManager_ScreenshotPair__Class>(type_info(), "", "SaveSlotsScreenshotManager", "ScreenshotPair");
        }
        inline app::SaveSlotsScreenshotManager_ScreenshotPair* create() {
            return il2cpp::create_object<app::SaveSlotsScreenshotManager_ScreenshotPair>(get_class());
        }
        inline app::SaveSlotsScreenshotManager_ScreenshotPair__Array* create_array(int size) {
            return il2cpp::array_new<app::SaveSlotsScreenshotManager_ScreenshotPair__Array>(get_class(), size);
        }
        inline app::SaveSlotsScreenshotManager_ScreenshotPair__Array* create_array(const std::vector<app::SaveSlotsScreenshotManager_ScreenshotPair*>& items) {
            return il2cpp::array_new<app::SaveSlotsScreenshotManager_ScreenshotPair__Array>(get_class(), items);
        }
    } // namespace SaveSlotsScreenshotManager_ScreenshotPair
} // namespace app::classes::types
