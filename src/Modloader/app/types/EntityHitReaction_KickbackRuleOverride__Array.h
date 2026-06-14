#pragma once
#include <Modloader/app/structs/EntityHitReaction_KickbackRuleOverride__Array.h>
#include <Modloader/app/structs/EntityHitReaction_KickbackRuleOverride__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityHitReaction_KickbackRuleOverride__Array {
        inline app::EntityHitReaction_KickbackRuleOverride__Array__Class** type_info() {
            static app::EntityHitReaction_KickbackRuleOverride__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityHitReaction_KickbackRuleOverride__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityHitReaction_KickbackRuleOverride__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityHitReaction_KickbackRuleOverride__Array__Class>(type_info(), "Moon", "EntityHitReaction+KickbackRuleOverride[]");
        }
        inline app::EntityHitReaction_KickbackRuleOverride__Array* create() {
            return il2cpp::create_object<app::EntityHitReaction_KickbackRuleOverride__Array>(get_class());
        }
    } // namespace EntityHitReaction_KickbackRuleOverride__Array
} // namespace app::classes::types
