#pragma once
#include <Modloader/app/structs/MortarDeathReaction.h>
#include <Modloader/app/structs/MortarDeathReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarDeathReaction {
        inline app::MortarDeathReaction__Class** type_info() {
            static app::MortarDeathReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarDeathReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::MortarDeathReaction__Class>(type_info(), "", "MortarDeathReaction");
        }
        inline app::MortarDeathReaction* create() {
            return il2cpp::create_object<app::MortarDeathReaction>(get_class());
        }
    } // namespace MortarDeathReaction
} // namespace app::classes::types
