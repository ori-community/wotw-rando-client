#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPointerEnterHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPointerEnterHandler__Class** type_info;
        inline app::IPointerEnterHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerEnterHandler__Class>(type_info, "UnityEngine.EventSystems", "IPointerEnterHandler");
        }
    } // namespace IPointerEnterHandler
} // namespace app::classes::types
