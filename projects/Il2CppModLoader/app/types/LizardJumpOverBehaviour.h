#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
