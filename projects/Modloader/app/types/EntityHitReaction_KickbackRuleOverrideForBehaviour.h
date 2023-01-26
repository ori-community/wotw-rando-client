#pragma once
#include <Modloader/app/structs/EntityHitReaction_KickbackRuleOverrideForBehaviour.h>
#include <Modloader/app/structs/EntityHitReaction_KickbackRuleOverrideForBehaviour__Array.h>
#include <Modloader/app/structs/EntityHitReaction_KickbackRuleOverrideForBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityHitReaction_KickbackRuleOverrideForBehaviour {
        inline app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Class** type_info() {
            static app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Class>(type_info(), "Moon", "EntityHitReaction", "KickbackRuleOverrideForBehaviour");
        }
        inline app::EntityHitReaction_KickbackRuleOverrideForBehaviour* create() {
            return il2cpp::create_object<app::EntityHitReaction_KickbackRuleOverrideForBehaviour>(get_class());
        }
        inline app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Array>(get_class(), size);
        }
        inline app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Array* create_array(const std::vector<app::EntityHitReaction_KickbackRuleOverrideForBehaviour*>& items) {
            return il2cpp::array_new<app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Array>(get_class(), items);
        }
    } // namespace EntityHitReaction_KickbackRuleOverrideForBehaviour
} // namespace app::classes::types
