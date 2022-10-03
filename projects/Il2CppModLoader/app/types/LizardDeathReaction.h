#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardDeathReaction {
        namespace {
            app::LizardDeathReaction__Class* type_info_ref = nullptr;
        }
        app::LizardDeathReaction__Class** type_info = &type_info_ref;
        inline app::LizardDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::LizardDeathReaction__Class>(type_info, "", "LizardDeathReaction");
        }
        inline app::LizardDeathReaction* create() {
            return il2cpp::create_object<app::LizardDeathReaction>(get_class());
        }
    } // namespace LizardDeathReaction
} // namespace app::classes::types
