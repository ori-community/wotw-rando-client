#pragma once
#include <Modloader/app/structs/RigidbodyInteractionController_InteractionInformation.h>
#include <Modloader/app/structs/RigidbodyInteractionController_InteractionInformation__Boxed.h>
#include <Modloader/app/structs/RigidbodyInteractionController_InteractionInformation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController_InteractionInformation {
        inline app::RigidbodyInteractionController_InteractionInformation__Class** type_info() {
            static app::RigidbodyInteractionController_InteractionInformation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyInteractionController_InteractionInformation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyInteractionController_InteractionInformation__Class* get_class() {
            return il2cpp::get_nested_class<app::RigidbodyInteractionController_InteractionInformation__Class>(type_info(), "", "RigidbodyInteractionController", "InteractionInformation");
        }
        inline app::RigidbodyInteractionController_InteractionInformation* create() {
            return il2cpp::create_object<app::RigidbodyInteractionController_InteractionInformation>(get_class());
        }
        inline app::RigidbodyInteractionController_InteractionInformation__Boxed* box(app::RigidbodyInteractionController_InteractionInformation value) {
            return il2cpp::box_value<app::RigidbodyInteractionController_InteractionInformation__Boxed>(get_class(), value);
        }
    } // namespace RigidbodyInteractionController_InteractionInformation
} // namespace app::classes::types
