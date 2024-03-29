#pragma once
#include <Modloader/app/structs/UberInteractionModifier_Interaction.h>
#include <Modloader/app/structs/UberInteractionModifier_Interaction__Boxed.h>
#include <Modloader/app/structs/UberInteractionModifier_Interaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionModifier_Interaction {
        inline app::UberInteractionModifier_Interaction__Class** type_info() {
            static app::UberInteractionModifier_Interaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberInteractionModifier_Interaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberInteractionModifier_Interaction__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionModifier_Interaction__Class>(type_info(), "", "UberInteractionModifier", "Interaction");
        }
        inline app::UberInteractionModifier_Interaction* create() {
            return il2cpp::create_object<app::UberInteractionModifier_Interaction>(get_class());
        }
        inline app::UberInteractionModifier_Interaction__Boxed* box(app::UberInteractionModifier_Interaction value) {
            return il2cpp::box_value<app::UberInteractionModifier_Interaction__Boxed>(get_class(), value);
        }
    } // namespace UberInteractionModifier_Interaction
} // namespace app::classes::types
