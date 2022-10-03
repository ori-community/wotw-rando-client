#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsScreenshotManager_ScreenshotPair__Array {
        namespace {
            app::SaveSlotsScreenshotManager_ScreenshotPair__Array__Class* type_info_ref = nullptr;
        }
        app::SaveSlotsScreenshotManager_ScreenshotPair__Array__Class** type_info = &type_info_ref;
        inline app::SaveSlotsScreenshotManager_ScreenshotPair__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotsScreenshotManager_ScreenshotPair__Array__Class>(type_info, "", "SaveSlotsScreenshotManager+ScreenshotPair[]");
        }
        inline app::SaveSlotsScreenshotManager_ScreenshotPair__Array* create() {
            return il2cpp::create_object<app::SaveSlotsScreenshotManager_ScreenshotPair__Array>(get_class());
        }
    } // namespace SaveSlotsScreenshotManager_ScreenshotPair__Array
} // namespace app::classes::types
