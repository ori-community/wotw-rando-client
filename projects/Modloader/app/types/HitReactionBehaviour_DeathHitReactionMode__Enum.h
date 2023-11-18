#pragma once
#include <Modloader/app/structs/HitReactionBehaviour_DeathHitReactionMode__Enum.h>
#include <Modloader/app/structs/HitReactionBehaviour_DeathHitReactionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviour_DeathHitReactionMode__Enum {
        inline app::HitReactionBehaviour_DeathHitReactionMode__Enum__Class** type_info() {
            static app::HitReactionBehaviour_DeathHitReactionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReactionBehaviour_DeathHitReactionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReactionBehaviour_DeathHitReactionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReactionBehaviour_DeathHitReactionMode__Enum__Class>(type_info(), "Moon", "HitReactionBehaviour", "DeathHitReactionMode");
        }
        inline app::HitReactionBehaviour_DeathHitReactionMode__Enum* create() {
            return il2cpp::create_object<app::HitReactionBehaviour_DeathHitReactionMode__Enum>(get_class());
        }
    } // namespace HitReactionBehaviour_DeathHitReactionMode__Enum
} // namespace app::classes::types
