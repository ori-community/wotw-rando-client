#pragma once
#include <Modloader/app/structs/LizardDeathReaction.h>
#include <Modloader/app/structs/LizardDeathReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardDeathReaction {
        inline app::LizardDeathReaction__Class** type_info() {
            static app::LizardDeathReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardDeathReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::LizardDeathReaction__Class>(type_info(), "", "LizardDeathReaction");
        }
        inline app::LizardDeathReaction* create() {
            return il2cpp::create_object<app::LizardDeathReaction>(get_class());
        }
    } // namespace LizardDeathReaction
} // namespace app::classes::types
