#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUpdateSelectedHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUpdateSelectedHandler__Class** type_info;
        inline app::IUpdateSelectedHandler__Class* get_class() {
            return il2cpp::get_class<app::IUpdateSelectedHandler__Class>(type_info, "UnityEngine.EventSystems", "IUpdateSelectedHandler");
        }
    } // namespace IUpdateSelectedHandler
} // namespace app::classes::types
