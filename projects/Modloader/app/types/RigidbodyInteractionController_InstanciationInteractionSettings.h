#pragma once
#include <Modloader/app/structs/RigidbodyInteractionController_InstanciationInteractionSettings.h>
#include <Modloader/app/structs/RigidbodyInteractionController_InstanciationInteractionSettings__Array.h>
#include <Modloader/app/structs/RigidbodyInteractionController_InstanciationInteractionSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController_InstanciationInteractionSettings {
        inline app::RigidbodyInteractionController_InstanciationInteractionSettings__Class** type_info() {
            static app::RigidbodyInteractionController_InstanciationInteractionSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyInteractionController_InstanciationInteractionSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyInteractionController_InstanciationInteractionSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::RigidbodyInteractionController_InstanciationInteractionSettings__Class>(type_info(), "", "RigidbodyInteractionController", "InstanciationInteractionSettings");
        }
        inline app::RigidbodyInteractionController_InstanciationInteractionSettings* create() {
            return il2cpp::create_object<app::RigidbodyInteractionController_InstanciationInteractionSettings>(get_class());
        }
        inline app::RigidbodyInteractionController_InstanciationInteractionSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::RigidbodyInteractionController_InstanciationInteractionSettings__Array>(get_class(), size);
        }
        inline app::RigidbodyInteractionController_InstanciationInteractionSettings__Array* create_array(const std::vector<app::RigidbodyInteractionController_InstanciationInteractionSettings*>& items) {
            return il2cpp::array_new<app::RigidbodyInteractionController_InstanciationInteractionSettings__Array>(get_class(), items);
        }
    } // namespace RigidbodyInteractionController_InstanciationInteractionSettings
} // namespace app::classes::types
