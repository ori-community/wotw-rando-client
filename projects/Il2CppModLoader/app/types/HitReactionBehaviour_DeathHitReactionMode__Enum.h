#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviour_DeathHitReactionMode__Enum {
        namespace {
            app::HitReactionBehaviour_DeathHitReactionMode__Enum__Class* type_info_ref = nullptr;
        }
        app::HitReactionBehaviour_DeathHitReactionMode__Enum__Class** type_info = &type_info_ref;
        inline app::HitReactionBehaviour_DeathHitReactionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReactionBehaviour_DeathHitReactionMode__Enum__Class>(type_info, "Moon", "HitReactionBehaviour", "DeathHitReactionMode");
        }
        inline app::HitReactionBehaviour_DeathHitReactionMode__Enum* create() {
            return il2cpp::create_object<app::HitReactionBehaviour_DeathHitReactionMode__Enum>(get_class());
        }
    } // namespace HitReactionBehaviour_DeathHitReactionMode__Enum
} // namespace app::classes::types
