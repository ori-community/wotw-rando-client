#pragma once
#include <Modloader/app/structs/HornbugBossHitReactionsBehaviour_Reaction__Array.h>
#include <Modloader/app/structs/HornbugBossHitReactionsBehaviour_Reaction__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornbugBossHitReactionsBehaviour_Reaction__Array {
        inline app::HornbugBossHitReactionsBehaviour_Reaction__Array__Class** type_info() {
            static app::HornbugBossHitReactionsBehaviour_Reaction__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornbugBossHitReactionsBehaviour_Reaction__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornbugBossHitReactionsBehaviour_Reaction__Array__Class* get_class() {
            return il2cpp::get_class<app::HornbugBossHitReactionsBehaviour_Reaction__Array__Class>(type_info(), "", "HornbugBossHitReactionsBehaviour+Reaction[]");
        }
        inline app::HornbugBossHitReactionsBehaviour_Reaction__Array* create() {
            return il2cpp::create_object<app::HornbugBossHitReactionsBehaviour_Reaction__Array>(get_class());
        }
    } // namespace HornbugBossHitReactionsBehaviour_Reaction__Array
} // namespace app::classes::types
