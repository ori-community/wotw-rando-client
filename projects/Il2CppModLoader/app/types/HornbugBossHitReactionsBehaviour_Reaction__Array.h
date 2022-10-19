#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornbugBossHitReactionsBehaviour_Reaction__Array {
        namespace {
            inline app::HornbugBossHitReactionsBehaviour_Reaction__Array__Class* type_info_ref = nullptr;
        }
        inline app::HornbugBossHitReactionsBehaviour_Reaction__Array__Class** type_info = &type_info_ref;
        inline app::HornbugBossHitReactionsBehaviour_Reaction__Array__Class* get_class() {
            return il2cpp::get_class<app::HornbugBossHitReactionsBehaviour_Reaction__Array__Class>(type_info, "", "HornbugBossHitReactionsBehaviour+Reaction[]");
        }
        inline app::HornbugBossHitReactionsBehaviour_Reaction__Array* create() {
            return il2cpp::create_object<app::HornbugBossHitReactionsBehaviour_Reaction__Array>(get_class());
        }
    } // namespace HornbugBossHitReactionsBehaviour_Reaction__Array
} // namespace app::classes::types
