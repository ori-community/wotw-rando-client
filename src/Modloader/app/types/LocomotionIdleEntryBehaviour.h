#pragma once
#include <Modloader/app/structs/LocomotionIdleEntryBehaviour.h>
#include <Modloader/app/structs/LocomotionIdleEntryBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionIdleEntryBehaviour {
        inline app::LocomotionIdleEntryBehaviour__Class** type_info() {
            static app::LocomotionIdleEntryBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionIdleEntryBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionIdleEntryBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionIdleEntryBehaviour__Class>(type_info(), "", "LocomotionIdleEntryBehaviour");
        }
        inline app::LocomotionIdleEntryBehaviour* create() {
            return il2cpp::create_object<app::LocomotionIdleEntryBehaviour>(get_class());
        }
    } // namespace LocomotionIdleEntryBehaviour
} // namespace app::classes::types
