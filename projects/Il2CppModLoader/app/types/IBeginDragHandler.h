#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBeginDragHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBeginDragHandler__Class** type_info;
        inline app::IBeginDragHandler__Class* get_class() {
            return il2cpp::get_class<app::IBeginDragHandler__Class>(type_info, "UnityEngine.EventSystems", "IBeginDragHandler");
        }
    } // namespace IBeginDragHandler
} // namespace app::classes::types
