#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPointerExitHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPointerExitHandler__Class** type_info;
        inline app::IPointerExitHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerExitHandler__Class>(type_info, "UnityEngine.EventSystems", "IPointerExitHandler");
        }
        inline app::IPointerExitHandler* create() {
            return il2cpp::create_object<app::IPointerExitHandler>(get_class());
        }
    } // namespace IPointerExitHandler
} // namespace app::classes::types
