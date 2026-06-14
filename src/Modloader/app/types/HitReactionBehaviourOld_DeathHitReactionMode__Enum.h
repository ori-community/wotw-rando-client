#pragma once
#include <Modloader/app/structs/HitReactionBehaviourOld_DeathHitReactionMode__Enum.h>
#include <Modloader/app/structs/HitReactionBehaviourOld_DeathHitReactionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviourOld_DeathHitReactionMode__Enum {
        inline app::HitReactionBehaviourOld_DeathHitReactionMode__Enum__Class** type_info() {
            static app::HitReactionBehaviourOld_DeathHitReactionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReactionBehaviourOld_DeathHitReactionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReactionBehaviourOld_DeathHitReactionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReactionBehaviourOld_DeathHitReactionMode__Enum__Class>(type_info(), "Moon", "HitReactionBehaviourOld", "DeathHitReactionMode");
        }
        inline app::HitReactionBehaviourOld_DeathHitReactionMode__Enum* create() {
            return il2cpp::create_object<app::HitReactionBehaviourOld_DeathHitReactionMode__Enum>(get_class());
        }
    } // namespace HitReactionBehaviourOld_DeathHitReactionMode__Enum
} // namespace app::classes::types
