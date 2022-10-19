#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveSlotsScreenshotManager {
        inline app::SaveSlotsScreenshotManager__Class** type_info = (app::SaveSlotsScreenshotManager__Class**)(modloader::win::memory::resolve_rva(0x0470A468));
        inline app::SaveSlotsScreenshotManager__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotsScreenshotManager__Class>(type_info, "", "SaveSlotsScreenshotManager");
        }
        inline app::SaveSlotsScreenshotManager* create() {
            return il2cpp::create_object<app::SaveSlotsScreenshotManager>(get_class());
        }
    } // namespace SaveSlotsScreenshotManager
} // namespace app::classes::types
