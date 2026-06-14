#pragma once
#include <Modloader/app/structs/RigidbodyInteractionController_SoundInteractionSettings.h>
#include <Modloader/app/structs/RigidbodyInteractionController_SoundInteractionSettings__Array.h>
#include <Modloader/app/structs/RigidbodyInteractionController_SoundInteractionSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController_SoundInteractionSettings {
        inline app::RigidbodyInteractionController_SoundInteractionSettings__Class** type_info() {
            static app::RigidbodyInteractionController_SoundInteractionSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyInteractionController_SoundInteractionSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyInteractionController_SoundInteractionSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::RigidbodyInteractionController_SoundInteractionSettings__Class>(type_info(), "", "RigidbodyInteractionController", "SoundInteractionSettings");
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
