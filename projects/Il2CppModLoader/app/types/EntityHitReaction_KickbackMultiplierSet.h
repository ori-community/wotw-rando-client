#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityHitReaction_KickbackMultiplierSet {
        namespace {
            inline app::EntityHitReaction_KickbackMultiplierSet__Class* type_info_ref = nullptr;
        }
        inline app::EntityHitReaction_KickbackMultiplierSet__Class** type_info = &type_info_ref;
        inline app::EntityHitReaction_KickbackMultiplierSet__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityHitReaction_KickbackMultiplierSet__Class>(type_info, "Moon", "EntityHitReaction", "KickbackMultiplierSet");
        }
        inline app::EntityHitReaction_KickbackMultiplierSet* create() {
            return il2cpp::create_object<app::EntityHitReaction_KickbackMultiplierSet>(get_class());
        }
    } // namespace EntityHitReaction_KickbackMultiplierSet
} // namespace app::classes::types
