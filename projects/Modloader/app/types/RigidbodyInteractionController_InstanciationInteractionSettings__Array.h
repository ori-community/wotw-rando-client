#pragma once
#include <Modloader/app/structs/RigidbodyInteractionController_InstanciationInteractionSettings__Array.h>
#include <Modloader/app/structs/RigidbodyInteractionController_InstanciationInteractionSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController_InstanciationInteractionSettings__Array {
        inline app::RigidbodyInteractionController_InstanciationInteractionSettings__Array__Class** type_info() {
            static app::RigidbodyInteractionController_InstanciationInteractionSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyInteractionController_InstanciationInteractionSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyInteractionController_InstanciationInteractionSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyInteractionController_InstanciationInteractionSettings__Array__Class>(type_info(), "", "RigidbodyInteractionController+InstanciationInteractionSettings[]");
        }
        inline app::RigidbodyInteractionController_InstanciationInteractionSettings__Array* create() {
            return il2cpp::create_object<app::RigidbodyInteractionController_InstanciationInteractionSettings__Array>(get_class());
        }
    } // namespace RigidbodyInteractionController_InstanciationInteractionSettings__Array
} // namespace app::classes::types
