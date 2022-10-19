#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController_SoundInteractionSettings {
        namespace {
            inline app::RigidbodyInteractionController_SoundInteractionSettings__Class* type_info_ref = nullptr;
        }
        inline app::RigidbodyInteractionController_SoundInteractionSettings__Class** type_info = &type_info_ref;
        inline app::RigidbodyInteractionController_SoundInteractionSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::RigidbodyInteractionController_SoundInteractionSettings__Class>(type_info, "", "RigidbodyInteractionController", "SoundInteractionSettings");
        }
        inline app::RigidbodyInteractionController_SoundInteractionSettings* create() {
            return il2cpp::create_object<app::RigidbodyInteractionController_SoundInteractionSettings>(get_class());
        }
        inline app::RigidbodyInteractionController_SoundInteractionSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::RigidbodyInteractionController_SoundInteractionSettings__Array>(get_class(), size);
        }
        inline app::RigidbodyInteractionController_SoundInteractionSettings__Array* create_array(const std::vector<app::RigidbodyInteractionController_SoundInteractionSettings*>& items) {
            return il2cpp::array_new<app::RigidbodyInteractionController_SoundInteractionSettings__Array>(get_class(), items);
        }
    } // namespace RigidbodyInteractionController_SoundInteractionSettings
} // namespace app::classes::types
