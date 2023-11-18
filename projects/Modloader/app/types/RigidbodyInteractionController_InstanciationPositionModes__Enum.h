#pragma once
#include <Modloader/app/structs/RigidbodyInteractionController_InstanciationPositionModes__Enum.h>
#include <Modloader/app/structs/RigidbodyInteractionController_InstanciationPositionModes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController_InstanciationPositionModes__Enum {
        inline app::RigidbodyInteractionController_InstanciationPositionModes__Enum__Class** type_info() {
            static app::RigidbodyInteractionController_InstanciationPositionModes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyInteractionController_InstanciationPositionModes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyInteractionController_InstanciationPositionModes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RigidbodyInteractionController_InstanciationPositionModes__Enum__Class>(type_info(), "", "RigidbodyInteractionController", "InstanciationPositionModes");
        }
        inline app::RigidbodyInteractionController_InstanciationPositionModes__Enum* create() {
            return il2cpp::create_object<app::RigidbodyInteractionController_InstanciationPositionModes__Enum>(get_class());
        }
    } // namespace RigidbodyInteractionController_InstanciationPositionModes__Enum
} // namespace app::classes::types
