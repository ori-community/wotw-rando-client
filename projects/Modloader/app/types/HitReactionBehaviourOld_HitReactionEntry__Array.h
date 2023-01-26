#pragma once
#include <Modloader/app/structs/HitReactionBehaviourOld_HitReactionEntry__Array.h>
#include <Modloader/app/structs/HitReactionBehaviourOld_HitReactionEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviourOld_HitReactionEntry__Array {
        inline app::HitReactionBehaviourOld_HitReactionEntry__Array__Class** type_info() {
            static app::HitReactionBehaviourOld_HitReactionEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReactionBehaviourOld_HitReactionEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReactionBehaviourOld_HitReactionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::HitReactionBehaviourOld_HitReactionEntry__Array__Class>(type_info(), "Moon", "HitReactionBehaviourOld+HitReactionEntry[]");
        }
        inline app::HitReactionBehaviourOld_HitReactionEntry__Array* create() {
            return il2cpp::create_object<app::HitReactionBehaviourOld_HitReactionEntry__Array>(get_class());
        }
    } // namespace HitReactionBehaviourOld_HitReactionEntry__Array
} // namespace app::classes::types
