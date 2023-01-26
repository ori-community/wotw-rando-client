#pragma once
#include <Modloader/app/structs/StepMovementBehaviour.h>
#include <Modloader/app/structs/StepMovementBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StepMovementBehaviour {
        inline app::StepMovementBehaviour__Class** type_info() {
            static app::StepMovementBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StepMovementBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StepMovementBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StepMovementBehaviour__Class>(type_info(), "", "StepMovementBehaviour");
        }
        inline app::StepMovementBehaviour* create() {
            return il2cpp::create_object<app::StepMovementBehaviour>(get_class());
        }
    } // namespace StepMovementBehaviour
} // namespace app::classes::types
