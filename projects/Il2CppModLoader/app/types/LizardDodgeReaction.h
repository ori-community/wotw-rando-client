#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardDodgeReaction {
        namespace {
            app::LizardDodgeReaction__Class* type_info_ref = nullptr;
        }
        app::LizardDodgeReaction__Class** type_info = &type_info_ref;
        inline app::LizardDodgeReaction__Class* get_class() {
            return il2cpp::get_class<app::LizardDodgeReaction__Class>(type_info, "", "LizardDodgeReaction");
        }
        inline app::LizardDodgeReaction* create() {
            return il2cpp::create_object<app::LizardDodgeReaction>(get_class());
        }
    } // namespace LizardDodgeReaction
} // namespace app::classes::types
