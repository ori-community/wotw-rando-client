#pragma once
#include <Modloader/app/structs/CompositeTriggerCollider_PropagateCollisionsToSiblings_d_9.h>
#include <Modloader/app/structs/CompositeTriggerCollider_PropagateCollisionsToSiblings_d_9__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompositeTriggerCollider_PropagateCollisionsToSiblings_d_9 {
        inline app::CompositeTriggerCollider_PropagateCollisionsToSiblings_d_9__Class** type_info() {
            static app::CompositeTriggerCollider_PropagateCollisionsToSiblings_d_9__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompositeTriggerCollider_PropagateCollisionsToSiblings_d_9__Class**)(modloader::win::memory::resolve_rva(0x0472E768));
            }
            return cache;
        }
        inline app::CompositeTriggerCollider_PropagateCollisionsToSiblings_d_9__Class* get_class() {
            return il2cpp::get_nested_class<app::CompositeTriggerCollider_PropagateCollisionsToSiblings_d_9__Class>(type_info(), "", "CompositeTriggerCollider", "<PropagateCollisionsToSiblings>d__9");
        }
        inline app::CompositeTriggerCollider_PropagateCollisionsToSiblings_d_9* create() {
            return il2cpp::create_object<app::CompositeTriggerCollider_PropagateCollisionsToSiblings_d_9>(get_class());
        }
    } // namespace CompositeTriggerCollider_PropagateCollisionsToSiblings_d_9
} // namespace app::classes::types
