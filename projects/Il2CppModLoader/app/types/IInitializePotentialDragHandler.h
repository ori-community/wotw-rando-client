#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInitializePotentialDragHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IInitializePotentialDragHandler__Class** type_info;
        inline app::IInitializePotentialDragHandler__Class* get_class() {
            return il2cpp::get_class<app::IInitializePotentialDragHandler__Class>(type_info, "UnityEngine.EventSystems", "IInitializePotentialDragHandler");
        }
        inline app::IInitializePotentialDragHandler* create() {
            return il2cpp::create_object<app::IInitializePotentialDragHandler>(get_class());
        }
    } // namespace IInitializePotentialDragHandler
} // namespace app::classes::types
