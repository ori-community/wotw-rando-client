#pragma once
#include <Modloader/app/structs/RigidbodyInteractionController_SoundInteractionSettings__Array.h>
#include <Modloader/app/structs/RigidbodyInteractionController_SoundInteractionSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController_SoundInteractionSettings__Array {
        inline app::RigidbodyInteractionController_SoundInteractionSettings__Array__Class** type_info() {
            static app::RigidbodyInteractionController_SoundInteractionSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyInteractionController_SoundInteractionSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyInteractionController_SoundInteractionSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyInteractionController_SoundInteractionSettings__Array__Class>(type_info(), "", "RigidbodyInteractionController+SoundInteractionSettings[]");
        }
        inline app::RigidbodyInteractionController_SoundInteractionSettings__Array* create() {
            return il2cpp::create_object<app::RigidbodyInteractionController_SoundInteractionSettings__Array>(get_class());
        }
    } // namespace RigidbodyInteractionController_SoundInteractionSettings__Array
} // namespace app::classes::types
