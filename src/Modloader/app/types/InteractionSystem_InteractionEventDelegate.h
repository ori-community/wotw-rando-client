#pragma once
#include <Modloader/app/structs/InteractionSystem_InteractionEventDelegate.h>
#include <Modloader/app/structs/InteractionSystem_InteractionEventDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionSystem_InteractionEventDelegate {
        inline app::InteractionSystem_InteractionEventDelegate__Class** type_info() {
            static app::InteractionSystem_InteractionEventDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionSystem_InteractionEventDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionSystem_InteractionEventDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionSystem_InteractionEventDelegate__Class>(type_info(), "RootMotion.FinalIK", "InteractionSystem", "InteractionEventDelegate");
        }
        inline app::InteractionSystem_InteractionEventDelegate* create() {
            return il2cpp::create_object<app::InteractionSystem_InteractionEventDelegate>(get_class());
        }
    } // namespace InteractionSystem_InteractionEventDelegate
} // namespace app::classes::types
