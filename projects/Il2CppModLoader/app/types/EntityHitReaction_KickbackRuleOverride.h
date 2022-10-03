#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityHitReaction_KickbackRuleOverride {
        namespace {
            app::EntityHitReaction_KickbackRuleOverride__Class* type_info_ref = nullptr;
        }
        app::EntityHitReaction_KickbackRuleOverride__Class** type_info = &type_info_ref;
        inline app::EntityHitReaction_KickbackRuleOverride__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityHitReaction_KickbackRuleOverride__Class>(type_info, "Moon", "EntityHitReaction", "KickbackRuleOverride");
        }
        inline app::EntityHitReaction_KickbackRuleOverride* create() {
            return il2cpp::create_object<app::EntityHitReaction_KickbackRuleOverride>(get_class());
        }
        inline app::EntityHitReaction_KickbackRuleOverride__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityHitReaction_KickbackRuleOverride__Array>(get_class(), size);
        }
    } // namespace EntityHitReaction_KickbackRuleOverride
} // namespace app::classes::types
