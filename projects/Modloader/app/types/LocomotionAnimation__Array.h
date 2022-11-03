#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocomotionAnimation__Array {
        namespace {
            inline app::LocomotionAnimation__Array__Class* type_info_ref = nullptr;
        }
        inline app::LocomotionAnimation__Array__Class** type_info = &type_info_ref;
        inline app::LocomotionAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::LocomotionAnimation__Array__Class>(type_info, "Moon", "LocomotionAnimation[]");
        }
        inline app::LocomotionAnimation__Array* create() {
            return il2cpp::create_object<app::LocomotionAnimation__Array>(get_class());
        }
    } // namespace LocomotionAnimation__Array
} // namespace app::classes::types
