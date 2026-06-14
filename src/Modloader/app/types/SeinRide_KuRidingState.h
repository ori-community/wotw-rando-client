#pragma once
#include <Modloader/app/structs/SeinRide_KuRidingState.h>
#include <Modloader/app/structs/SeinRide_KuRidingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinRide_KuRidingState {
        inline app::SeinRide_KuRidingState__Class** type_info() {
            static app::SeinRide_KuRidingState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinRide_KuRidingState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinRide_KuRidingState__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinRide_KuRidingState__Class>(type_info(), "", "SeinRide", "KuRidingState");
        }
        inline app::SeinRide_KuRidingState* create() {
            return il2cpp::create_object<app::SeinRide_KuRidingState>(get_class());
        }
    } // namespace SeinRide_KuRidingState
} // namespace app::classes::types
