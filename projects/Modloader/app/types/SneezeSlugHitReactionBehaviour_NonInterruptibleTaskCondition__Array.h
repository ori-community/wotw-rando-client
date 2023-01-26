#pragma once
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array.h>
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array {
        inline app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class** type_info() {
            static app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class>(type_info(), "", "SneezeSlugHitReactionBehaviour+NonInterruptibleTaskCondition[]");
        }
        inline app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array* create() {
            return il2cpp::create_object<app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array>(get_class());
        }
    } // namespace SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array
} // namespace app::classes::types
