#pragma once
#include <Modloader/app/structs/HornbugBossHitReactionsBehaviour_Reaction.h>
#include <Modloader/app/structs/HornbugBossHitReactionsBehaviour_Reaction__Array.h>
#include <Modloader/app/structs/HornbugBossHitReactionsBehaviour_Reaction__Boxed.h>
#include <Modloader/app/structs/HornbugBossHitReactionsBehaviour_Reaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornbugBossHitReactionsBehaviour_Reaction {
        inline app::HornbugBossHitReactionsBehaviour_Reaction__Class** type_info() {
            static app::HornbugBossHitReactionsBehaviour_Reaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornbugBossHitReactionsBehaviour_Reaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornbugBossHitReactionsBehaviour_Reaction__Class* get_class() {
            return il2cpp::get_nested_class<app::HornbugBossHitReactionsBehaviour_Reaction__Class>(type_info(), "", "HornbugBossHitReactionsBehaviour", "Reaction");
        }
        inline app::HornbugBossHitReactionsBehaviour_Reaction* create() {
            return il2cpp::create_object<app::HornbugBossHitReactionsBehaviour_Reaction>(get_class());
        }
        inline app::HornbugBossHitReactionsBehaviour_Reaction__Boxed* box(app::HornbugBossHitReactionsBehaviour_Reaction value) {
            return il2cpp::box_value<app::HornbugBossHitReactionsBehaviour_Reaction__Boxed>(get_class(), value);
        }
        inline app::HornbugBossHitReactionsBehaviour_Reaction__Array* create_array(int size) {
            return il2cpp::array_new<app::HornbugBossHitReactionsBehaviour_Reaction__Array>(get_class(), size);
        }
        inline app::HornbugBossHitReactionsBehaviour_Reaction__Array* create_array(const std::vector<app::HornbugBossHitReactionsBehaviour_Reaction>& items) {
            return il2cpp::array_new<app::HornbugBossHitReactionsBehaviour_Reaction__Array>(get_class(), items);
        }
    } // namespace HornbugBossHitReactionsBehaviour_Reaction
} // namespace app::classes::types
