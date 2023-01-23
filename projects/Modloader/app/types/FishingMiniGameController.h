#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FishingMiniGameController__Class.h>
#include <Modloader/app/structs/FishingMiniGameController.h>

namespace app::classes::types {
    namespace FishingMiniGameController {
        namespace {
            inline app::FishingMiniGameController__Class* type_info_ref = nullptr;
        }
        inline app::FishingMiniGameController__Class** type_info = &type_info_ref;
        inline app::FishingMiniGameController__Class* get_class() {
            return il2cpp::get_class<app::FishingMiniGameController__Class>(type_info, "", "FishingMiniGameController");
        }
        inline app::FishingMiniGameController* create() {
            return il2cpp::create_object<app::FishingMiniGameController>(get_class());
        }
    } // namespace FishingMiniGameController
} // namespace app::classes::types
