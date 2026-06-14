#pragma once
#include <Modloader/app/structs/HitReactionBehaviour_StaggetEntry__Array.h>
#include <Modloader/app/structs/HitReactionBehaviour_StaggetEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviour_StaggetEntry__Array {
        inline app::HitReactionBehaviour_StaggetEntry__Array__Class** type_info() {
            static app::HitReactionBehaviour_StaggetEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReactionBehaviour_StaggetEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReactionBehaviour_StaggetEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::HitReactionBehaviour_StaggetEntry__Array__Class>(type_info(), "Moon", "HitReactionBehaviour+StaggetEntry[]");
        }
        inline app::HitReactionBehaviour_StaggetEntry__Array* create() {
            return il2cpp::create_object<app::HitReactionBehaviour_StaggetEntry__Array>(get_class());
        }
    } // namespace HitReactionBehaviour_StaggetEntry__Array
} // namespace app::classes::types
