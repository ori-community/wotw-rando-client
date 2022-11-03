#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityHitReaction_KickbackRuleOverride {
        namespace {
            inline app::EntityHitReaction_KickbackRuleOverride__Class* type_info_ref = nullptr;
        }
        inline app::EntityHitReaction_KickbackRuleOverride__Class** type_info = &type_info_ref;
        inline app::EntityHitReaction_KickbackRuleOverride__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityHitReaction_KickbackRuleOverride__Class>(type_info, "Moon", "EntityHitReaction", "KickbackRuleOverride");
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
