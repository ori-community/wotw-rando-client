#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StepMovementBehaviour {
        namespace {
            app::StepMovementBehaviour__Class* type_info_ref = nullptr;
        }
        app::StepMovementBehaviour__Class** type_info = &type_info_ref;
        inline app::StepMovementBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StepMovementBehaviour__Class>(type_info, "", "StepMovementBehaviour");
        }
        inline app::StepMovementBehaviour* create() {
            return il2cpp::create_object<app::StepMovementBehaviour>(get_class());
        }
    } // namespace StepMovementBehaviour
} // namespace app::classes::types
