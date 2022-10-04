#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPointerClickHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPointerClickHandler__Class** type_info;
        inline app::IPointerClickHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerClickHandler__Class>(type_info, "UnityEngine.EventSystems", "IPointerClickHandler");
        }
        inline app::IPointerClickHandler* create() {
            return il2cpp::create_object<app::IPointerClickHandler>(get_class());
        }
    } // namespace IPointerClickHandler
} // namespace app::classes::types
