#pragma once
#include <Modloader/app/structs/SaveSlotsScreenshotManager.h>
#include <Modloader/app/structs/SaveSlotsScreenshotManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsScreenshotManager {
        inline app::SaveSlotsScreenshotManager__Class** type_info() {
            static app::SaveSlotsScreenshotManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SaveSlotsScreenshotManager__Class**)(modloader::win::memory::resolve_rva(0x0470A468));
            }
            return cache;
        }
        inline app::SaveSlotsScreenshotManager__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotsScreenshotManager__Class>(type_info(), "", "SaveSlotsScreenshotManager");
        }
        inline app::SaveSlotsScreenshotManager* create() {
            return il2cpp::create_object<app::SaveSlotsScreenshotManager>(get_class());
        }
    } // namespace SaveSlotsScreenshotManager
} // namespace app::classes::types
