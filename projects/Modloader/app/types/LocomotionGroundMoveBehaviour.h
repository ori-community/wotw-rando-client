#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocomotionGroundMoveBehaviour {
        namespace {
            inline app::LocomotionGroundMoveBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LocomotionGroundMoveBehaviour__Class** type_info = &type_info_ref;
        inline app::LocomotionGroundMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionGroundMoveBehaviour__Class>(type_info, "", "LocomotionGroundMoveBehaviour");
        }
        inline app::LocomotionGroundMoveBehaviour* create() {
            return il2cpp::create_object<app::LocomotionGroundMoveBehaviour>(get_class());
        }
    } // namespace LocomotionGroundMoveBehaviour
} // namespace app::classes::types
