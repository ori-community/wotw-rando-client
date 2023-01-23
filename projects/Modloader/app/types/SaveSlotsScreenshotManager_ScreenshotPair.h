#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SaveSlotsScreenshotManager_ScreenshotPair__Class.h>
#include <Modloader/app/structs/SaveSlotsScreenshotManager_ScreenshotPair.h>
#include <Modloader/app/structs/SaveSlotsScreenshotManager_ScreenshotPair__Array.h>

namespace app::classes::types {
    namespace SaveSlotsScreenshotManager_ScreenshotPair {
        namespace {
            inline app::SaveSlotsScreenshotManager_ScreenshotPair__Class* type_info_ref = nullptr;
        }
        inline app::SaveSlotsScreenshotManager_ScreenshotPair__Class** type_info = &type_info_ref;
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
