#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityHitReaction_KickbackRuleOverrideForBehaviour {
        namespace {
            inline app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Class** type_info = &type_info_ref;
        inline app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Class>(type_info, "Moon", "EntityHitReaction", "KickbackRuleOverrideForBehaviour");
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
