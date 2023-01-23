#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinRide_RideState__Class.h>
#include <Modloader/app/structs/SeinRide_RideState.h>
#include <Modloader/app/structs/SeinRide_RideState__Array.h>

namespace app::classes::types {
    namespace SeinRide_RideState {
        namespace {
            inline app::SeinRide_RideState__Class* type_info_ref = nullptr;
        }
        inline app::SeinRide_RideState__Class** type_info = &type_info_ref;
        inline app::SeinRide_RideState__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinRide_RideState__Class>(type_info, "", "SeinRide", "RideState");
        }
        inline app::SeinRide_RideState* create() {
            return il2cpp::create_object<app::SeinRide_RideState>(get_class());
        }
        inline app::SeinRide_RideState__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinRide_RideState__Array>(get_class(), size);
        }
        inline app::SeinRide_RideState__Array* create_array(const std::vector<app::SeinRide_RideState*>& items) {
            return il2cpp::array_new<app::SeinRide_RideState__Array>(get_class(), items);
        }
    } // namespace SeinRide_RideState
} // namespace app::classes::types
