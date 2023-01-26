#pragma once
#include <Modloader/app/structs/SeinRide_RideState__Array.h>
#include <Modloader/app/structs/SeinRide_RideState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinRide_RideState__Array {
        inline app::SeinRide_RideState__Array__Class** type_info() {
            static app::SeinRide_RideState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinRide_RideState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinRide_RideState__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinRide_RideState__Array__Class>(type_info(), "", "SeinRide+RideState[]");
        }
        inline app::SeinRide_RideState__Array* create() {
            return il2cpp::create_object<app::SeinRide_RideState__Array>(get_class());
        }
    } // namespace SeinRide_RideState__Array
} // namespace app::classes::types
