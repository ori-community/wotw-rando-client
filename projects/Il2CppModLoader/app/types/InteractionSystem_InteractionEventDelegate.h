#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionSystem_InteractionEventDelegate {
        namespace {
            app::InteractionSystem_InteractionEventDelegate__Class* type_info_ref = nullptr;
        }
        app::InteractionSystem_InteractionEventDelegate__Class** type_info = &type_info_ref;
        inline app::InteractionSystem_InteractionEventDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionSystem_InteractionEventDelegate__Class>(type_info, "RootMotion.FinalIK", "InteractionSystem", "InteractionEventDelegate");
        }
        inline app::InteractionSystem_InteractionEventDelegate* create() {
            return il2cpp::create_object<app::InteractionSystem_InteractionEventDelegate>(get_class());
        }
    } // namespace InteractionSystem_InteractionEventDelegate
} // namespace app::classes::types
