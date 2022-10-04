#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISelectHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISelectHandler__Class** type_info;
        inline app::ISelectHandler__Class* get_class() {
            return il2cpp::get_class<app::ISelectHandler__Class>(type_info, "UnityEngine.EventSystems", "ISelectHandler");
        }
    } // namespace ISelectHandler
} // namespace app::classes::types
