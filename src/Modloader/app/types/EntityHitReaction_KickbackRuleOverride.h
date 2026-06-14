#pragma once
#include <Modloader/app/structs/EntityHitReaction_KickbackRuleOverride.h>
#include <Modloader/app/structs/EntityHitReaction_KickbackRuleOverride__Array.h>
#include <Modloader/app/structs/EntityHitReaction_KickbackRuleOverride__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityHitReaction_KickbackRuleOverride {
        inline app::EntityHitReaction_KickbackRuleOverride__Class** type_info() {
            static app::EntityHitReaction_KickbackRuleOverride__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityHitReaction_KickbackRuleOverride__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityHitReaction_KickbackRuleOverride__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityHitReaction_KickbackRuleOverride__Class>(type_info(), "Moon", "EntityHitReaction", "KickbackRuleOverride");
        }
        inline app::EntityHitReaction_KickbackRuleOverride* create() {
            return il2cpp::create_object<app::EntityHitReaction_KickbackRuleOverride>(get_class());
        }
        inline app::EntityHitReaction_KickbackRuleOverride__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityHitReaction_KickbackRuleOverride__Array>(get_class(), size);
        }
        inline app::EntityHitReaction_KickbackRuleOverride__Array* create_array(const std::vector<app::EntityHitReaction_KickbackRuleOverride*>& items) {
            return il2cpp::array_new<app::EntityHitReaction_KickbackRuleOverride__Array>(get_class(), items);
        }
    } // namespace EntityHitReaction_KickbackRuleOverride
} // namespace app::classes::types
