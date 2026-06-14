#pragma once
#include <Modloader/app/structs/SeinRide_CartRidingState.h>
#include <Modloader/app/structs/SeinRide_CartRidingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinRide_CartRidingState {
        inline app::SeinRide_CartRidingState__Class** type_info() {
            static app::SeinRide_CartRidingState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinRide_CartRidingState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinRide_CartRidingState__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinRide_CartRidingState__Class>(type_info(), "", "SeinRide", "CartRidingState");
        }
        inline app::SeinRide_CartRidingState* create() {
            return il2cpp::create_object<app::SeinRide_CartRidingState>(get_class());
        }
    } // namespace SeinRide_CartRidingState
} // namespace app::classes::types
