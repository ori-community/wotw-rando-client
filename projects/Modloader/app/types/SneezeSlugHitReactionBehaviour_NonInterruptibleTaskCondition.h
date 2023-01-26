#pragma once
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition.h>
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array.h>
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition {
        inline app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Class** type_info() {
            static app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Class* get_class() {
            return il2cpp::get_nested_class<app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Class>(type_info(), "", "SneezeSlugHitReactionBehaviour", "NonInterruptibleTaskCondition");
        }
        inline app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition* create() {
            return il2cpp::create_object<app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition>(get_class());
        }
        inline app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array* create_array(int size) {
            return il2cpp::array_new<app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array>(get_class(), size);
        }
        inline app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array* create_array(const std::vector<app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition*>& items) {
            return il2cpp::array_new<app::SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array>(get_class(), items);
        }
    } // namespace SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition
} // namespace app::classes::types
