#pragma once
#include <Modloader/app/structs/FishingMiniGameController.h>
#include <Modloader/app/structs/FishingMiniGameController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishingMiniGameController {
        inline app::FishingMiniGameController__Class** type_info() {
            static app::FishingMiniGameController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FishingMiniGameController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FishingMiniGameController__Class* get_class() {
            return il2cpp::get_class<app::FishingMiniGameController__Class>(type_info(), "", "FishingMiniGameController");
        }
        inline app::FishingMiniGameController* create() {
            return il2cpp::create_object<app::FishingMiniGameController>(get_class());
        }
    } // namespace FishingMiniGameController
} // namespace app::classes::types
