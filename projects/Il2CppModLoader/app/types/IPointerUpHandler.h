#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPointerUpHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPointerUpHandler__Class** type_info;
        inline app::IPointerUpHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerUpHandler__Class>(type_info, "UnityEngine.EventSystems", "IPointerUpHandler");
        }
        inline app::IPointerUpHandler* create() {
            return il2cpp::create_object<app::IPointerUpHandler>(get_class());
        }
    } // namespace IPointerUpHandler
} // namespace app::classes::types
