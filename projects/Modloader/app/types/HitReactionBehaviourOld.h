#pragma once
#include <Modloader/app/structs/HitReactionBehaviourOld.h>
#include <Modloader/app/structs/HitReactionBehaviourOld__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviourOld {
        inline app::HitReactionBehaviourOld__Class** type_info() {
            static app::HitReactionBehaviourOld__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReactionBehaviourOld__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReactionBehaviourOld__Class* get_class() {
            return il2cpp::get_class<app::HitReactionBehaviourOld__Class>(type_info(), "Moon", "HitReactionBehaviourOld");
        }
        inline app::HitReactionBehaviourOld* create() {
            return il2cpp::create_object<app::HitReactionBehaviourOld>(get_class());
        }
    } // namespace HitReactionBehaviourOld
} // namespace app::classes::types
