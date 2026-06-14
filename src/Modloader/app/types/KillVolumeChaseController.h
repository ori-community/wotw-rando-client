#pragma once
#include <Modloader/app/structs/KillVolumeChaseController.h>
#include <Modloader/app/structs/KillVolumeChaseController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KillVolumeChaseController {
        inline app::KillVolumeChaseController__Class** type_info() {
            static app::KillVolumeChaseController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KillVolumeChaseController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KillVolumeChaseController__Class* get_class() {
            return il2cpp::get_class<app::KillVolumeChaseController__Class>(type_info(), "", "KillVolumeChaseController");
        }
        inline app::KillVolumeChaseController* create() {
            return il2cpp::create_object<app::KillVolumeChaseController>(get_class());
        }
    } // namespace KillVolumeChaseController
} // namespace app::classes::types
