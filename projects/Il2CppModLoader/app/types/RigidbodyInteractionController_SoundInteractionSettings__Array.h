#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController_SoundInteractionSettings__Array {
        namespace {
            app::RigidbodyInteractionController_SoundInteractionSettings__Array__Class* type_info_ref = nullptr;
        }
        app::RigidbodyInteractionController_SoundInteractionSettings__Array__Class** type_info = &type_info_ref;
        inline app::RigidbodyInteractionController_SoundInteractionSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyInteractionController_SoundInteractionSettings__Array__Class>(type_info, "", "RigidbodyInteractionController+SoundInteractionSettings[]");
        }
        inline app::RigidbodyInteractionController_SoundInteractionSettings__Array* create() {
            return il2cpp::create_object<app::RigidbodyInteractionController_SoundInteractionSettings__Array>(get_class());
        }
    } // namespace RigidbodyInteractionController_SoundInteractionSettings__Array
} // namespace app::classes::types
