#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController_InstanciationPositionModes__Enum {
        namespace {
            inline app::RigidbodyInteractionController_InstanciationPositionModes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RigidbodyInteractionController_InstanciationPositionModes__Enum__Class** type_info = &type_info_ref;
        inline app::RigidbodyInteractionController_InstanciationPositionModes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RigidbodyInteractionController_InstanciationPositionModes__Enum__Class>(type_info, "", "RigidbodyInteractionController", "InstanciationPositionModes");
        }
        inline app::RigidbodyInteractionController_InstanciationPositionModes__Enum* create() {
            return il2cpp::create_object<app::RigidbodyInteractionController_InstanciationPositionModes__Enum>(get_class());
        }
    } // namespace RigidbodyInteractionController_InstanciationPositionModes__Enum
} // namespace app::classes::types
