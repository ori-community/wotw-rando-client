#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberInteractionModifier_Interaction {
        namespace {
            inline app::UberInteractionModifier_Interaction__Class* type_info_ref = nullptr;
        }
        inline app::UberInteractionModifier_Interaction__Class** type_info = &type_info_ref;
        inline app::UberInteractionModifier_Interaction__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionModifier_Interaction__Class>(type_info, "", "UberInteractionModifier", "Interaction");
        }
        inline app::UberInteractionModifier_Interaction* create() {
            return il2cpp::create_object<app::UberInteractionModifier_Interaction>(get_class());
        }
        inline app::UberInteractionModifier_Interaction__Boxed* box(app::UberInteractionModifier_Interaction value) {
            return il2cpp::box_value<app::UberInteractionModifier_Interaction__Boxed>(get_class(), value);
        }
    } // namespace UberInteractionModifier_Interaction
} // namespace app::classes::types
