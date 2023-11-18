#pragma once
#include <Modloader/app/structs/PlayerAbilityStateMatcher.h>
#include <Modloader/app/structs/PlayerAbilityStateMatcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerAbilityStateMatcher {
        inline app::PlayerAbilityStateMatcher__Class** type_info() {
            static app::PlayerAbilityStateMatcher__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerAbilityStateMatcher__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerAbilityStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::PlayerAbilityStateMatcher__Class>(type_info(), "", "PlayerAbilityStateMatcher");
        }
        inline app::PlayerAbilityStateMatcher* create() {
            return il2cpp::create_object<app::PlayerAbilityStateMatcher>(get_class());
        }
    } // namespace PlayerAbilityStateMatcher
} // namespace app::classes::types
