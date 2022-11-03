#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinRide_KuRidingState {
        namespace {
            inline app::SeinRide_KuRidingState__Class* type_info_ref = nullptr;
        }
        inline app::SeinRide_KuRidingState__Class** type_info = &type_info_ref;
        inline app::SeinRide_KuRidingState__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinRide_KuRidingState__Class>(type_info, "", "SeinRide", "KuRidingState");
        }
        inline app::SeinRide_KuRidingState* create() {
            return il2cpp::create_object<app::SeinRide_KuRidingState>(get_class());
        }
    } // namespace SeinRide_KuRidingState
} // namespace app::classes::types
