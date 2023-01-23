#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinRide_RideState__Array__Class.h>
#include <Modloader/app/structs/SeinRide_RideState__Array.h>

namespace app::classes::types {
    namespace SeinRide_RideState__Array {
        namespace {
            inline app::SeinRide_RideState__Array__Class* type_info_ref = nullptr;
        }
        inline app::SeinRide_RideState__Array__Class** type_info = &type_info_ref;
        inline app::SeinRide_RideState__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinRide_RideState__Array__Class>(type_info, "", "SeinRide+RideState[]");
        }
        inline app::SeinRide_RideState__Array* create() {
            return il2cpp::create_object<app::SeinRide_RideState__Array>(get_class());
        }
    } // namespace SeinRide_RideState__Array
} // namespace app::classes::types
