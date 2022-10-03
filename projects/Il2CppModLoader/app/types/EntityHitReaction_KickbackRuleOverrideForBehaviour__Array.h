#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityHitReaction_KickbackRuleOverrideForBehaviour__Array {
        namespace {
            app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Array__Class* type_info_ref = nullptr;
        }
        app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Array__Class** type_info = &type_info_ref;
        inline app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Array__Class>(type_info, "Moon", "EntityHitReaction+KickbackRuleOverrideForBehaviour[]");
        }
        inline app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Array* create() {
            return il2cpp::create_object<app::EntityHitReaction_KickbackRuleOverrideForBehaviour__Array>(get_class());
        }
    } // namespace EntityHitReaction_KickbackRuleOverrideForBehaviour__Array
} // namespace app::classes::types
