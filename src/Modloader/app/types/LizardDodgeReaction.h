#pragma once
#include <Modloader/app/structs/LizardDodgeReaction.h>
#include <Modloader/app/structs/LizardDodgeReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardDodgeReaction {
        inline app::LizardDodgeReaction__Class** type_info() {
            static app::LizardDodgeReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardDodgeReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardDodgeReaction__Class* get_class() {
            return il2cpp::get_class<app::LizardDodgeReaction__Class>(type_info(), "", "LizardDodgeReaction");
        }
        inline app::LizardDodgeReaction* create() {
            return il2cpp::create_object<app::LizardDodgeReaction>(get_class());
        }
    } // namespace LizardDodgeReaction
} // namespace app::classes::types
