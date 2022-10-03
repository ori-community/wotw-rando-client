#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsScreenshotManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SaveSlotsScreenshotManager__Class** type_info;
        inline app::SaveSlotsScreenshotManager__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotsScreenshotManager__Class>(type_info, "", "SaveSlotsScreenshotManager");
        }
        inline app::SaveSlotsScreenshotManager* create() {
            return il2cpp::create_object<app::SaveSlotsScreenshotManager>(get_class());
        }
    } // namespace SaveSlotsScreenshotManager
} // namespace app::classes::types
