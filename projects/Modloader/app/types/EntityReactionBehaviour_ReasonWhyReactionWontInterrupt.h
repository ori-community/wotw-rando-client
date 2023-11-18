#pragma once
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt__Boxed.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityReactionBehaviour_ReasonWhyReactionWontInterrupt {
        inline app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt__Class** type_info() {
            static app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt__Class>(type_info(), "", "EntityReactionBehaviour", "ReasonWhyReactionWontInterrupt");
        }
        inline app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* create() {
            return il2cpp::create_object<app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt>(get_class());
        }
        inline app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt__Boxed* box(app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt value) {
            return il2cpp::box_value<app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt__Boxed>(get_class(), value);
        }
    } // namespace EntityReactionBehaviour_ReasonWhyReactionWontInterrupt
} // namespace app::classes::types
