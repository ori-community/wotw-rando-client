#pragma once
#include <Modloader/app/structs/PickupCameraTarget.h>
#include <Modloader/app/structs/PickupCameraTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PickupCameraTarget {
        inline app::PickupCameraTarget__Class** type_info() {
            static app::PickupCameraTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PickupCameraTarget__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PickupCameraTarget__Class* get_class() {
            return il2cpp::get_class<app::PickupCameraTarget__Class>(type_info(), "", "PickupCameraTarget");
        }
        inline app::PickupCameraTarget* create() {
            return il2cpp::create_object<app::PickupCameraTarget>(get_class());
        }
    } // namespace PickupCameraTarget
} // namespace app::classes::types
