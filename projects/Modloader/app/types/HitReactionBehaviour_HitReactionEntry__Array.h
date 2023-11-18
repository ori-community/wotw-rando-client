#pragma once
#include <Modloader/app/structs/HitReactionBehaviour_HitReactionEntry__Array.h>
#include <Modloader/app/structs/HitReactionBehaviour_HitReactionEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviour_HitReactionEntry__Array {
        inline app::HitReactionBehaviour_HitReactionEntry__Array__Class** type_info() {
            static app::HitReactionBehaviour_HitReactionEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReactionBehaviour_HitReactionEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReactionBehaviour_HitReactionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::HitReactionBehaviour_HitReactionEntry__Array__Class>(type_info(), "Moon", "HitReactionBehaviour+HitReactionEntry[]");
        }
        inline app::HitReactionBehaviour_HitReactionEntry__Array* create() {
            return il2cpp::create_object<app::HitReactionBehaviour_HitReactionEntry__Array>(get_class());
        }
    } // namespace HitReactionBehaviour_HitReactionEntry__Array
} // namespace app::classes::types
