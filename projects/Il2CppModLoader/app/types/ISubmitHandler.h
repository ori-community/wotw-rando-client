#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISubmitHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISubmitHandler__Class** type_info;
        inline app::ISubmitHandler__Class* get_class() {
            return il2cpp::get_class<app::ISubmitHandler__Class>(type_info, "UnityEngine.EventSystems", "ISubmitHandler");
        }
    } // namespace ISubmitHandler
} // namespace app::classes::types
