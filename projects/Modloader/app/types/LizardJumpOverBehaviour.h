#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LizardJumpOverBehaviour__Class.h>
#include <Modloader/app/structs/LizardJumpOverBehaviour.h>

namespace app::classes::types {
    namespace LizardJumpOverBehaviour {
        namespace {
            inline app::LizardJumpOverBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LizardJumpOverBehaviour__Class** type_info = &type_info_ref;
        inline app::LizardJumpOverBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardJumpOverBehaviour__Class>(type_info, "Moon", "LizardJumpOverBehaviour");
        }
        inline app::LizardJumpOverBehaviour* create() {
            return il2cpp::create_object<app::LizardJumpOverBehaviour>(get_class());
        }
    } // namespace LizardJumpOverBehaviour
} // namespace app::classes::types
