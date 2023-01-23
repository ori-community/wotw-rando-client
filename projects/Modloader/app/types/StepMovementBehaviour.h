#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StepMovementBehaviour__Class.h>
#include <Modloader/app/structs/StepMovementBehaviour.h>

namespace app::classes::types {
    namespace StepMovementBehaviour {
        namespace {
            inline app::StepMovementBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::StepMovementBehaviour__Class** type_info = &type_info_ref;
        inline app::StepMovementBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StepMovementBehaviour__Class>(type_info, "", "StepMovementBehaviour");
        }
        inline app::StepMovementBehaviour* create() {
            return il2cpp::create_object<app::StepMovementBehaviour>(get_class());
        }
    } // namespace StepMovementBehaviour
} // namespace app::classes::types
