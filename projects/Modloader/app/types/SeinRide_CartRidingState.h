#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinRide_CartRidingState {
        namespace {
            inline app::SeinRide_CartRidingState__Class* type_info_ref = nullptr;
        }
        inline app::SeinRide_CartRidingState__Class** type_info = &type_info_ref;
        inline app::SeinRide_CartRidingState__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinRide_CartRidingState__Class>(type_info, "", "SeinRide", "CartRidingState");
        }
        inline app::SeinRide_CartRidingState* create() {
            return il2cpp::create_object<app::SeinRide_CartRidingState>(get_class());
        }
    } // namespace SeinRide_CartRidingState
} // namespace app::classes::types
