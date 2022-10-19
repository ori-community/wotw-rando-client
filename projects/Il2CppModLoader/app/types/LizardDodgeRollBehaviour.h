#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LizardDodgeRollBehaviour {
        namespace {
            inline app::LizardDodgeRollBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LizardDodgeRollBehaviour__Class** type_info = &type_info_ref;
        inline app::LizardDodgeRollBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardDodgeRollBehaviour__Class>(type_info, "Moon", "LizardDodgeRollBehaviour");
        }
        inline app::LizardDodgeRollBehaviour* create() {
            return il2cpp::create_object<app::LizardDodgeRollBehaviour>(get_class());
        }
    } // namespace LizardDodgeRollBehaviour
} // namespace app::classes::types
