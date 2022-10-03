#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinRide_RideState {
        namespace {
            app::SeinRide_RideState__Class* type_info_ref = nullptr;
        }
        app::SeinRide_RideState__Class** type_info = &type_info_ref;
        inline app::SeinRide_RideState__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinRide_RideState__Class>(type_info, "", "SeinRide", "RideState");
        }
        inline app::SeinRide_RideState* create() {
            return il2cpp::create_object<app::SeinRide_RideState>(get_class());
        }
        inline app::SeinRide_RideState__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinRide_RideState__Array>(get_class(), size);
        }
    } // namespace SeinRide_RideState
} // namespace app::classes::types
