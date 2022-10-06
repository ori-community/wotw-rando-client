#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsScreenshotManager_ScreenshotPair {
        namespace {
            app::SaveSlotsScreenshotManager_ScreenshotPair__Class* type_info_ref = nullptr;
        }
        app::SaveSlotsScreenshotManager_ScreenshotPair__Class** type_info = &type_info_ref;
        inline app::SaveSlotsScreenshotManager_ScreenshotPair__Class* get_class() {
            return il2cpp::get_nested_class<app::SaveSlotsScreenshotManager_ScreenshotPair__Class>(type_info, "", "SaveSlotsScreenshotManager", "ScreenshotPair");
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
