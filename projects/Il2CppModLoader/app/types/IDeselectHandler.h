#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDeselectHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDeselectHandler__Class** type_info;
        inline app::IDeselectHandler__Class* get_class() {
            return il2cpp::get_class<app::IDeselectHandler__Class>(type_info, "UnityEngine.EventSystems", "IDeselectHandler");
        }
        inline app::IDeselectHandler* create() {
            return il2cpp::create_object<app::IDeselectHandler>(get_class());
        }
    } // namespace IDeselectHandler
} // namespace app::classes::types
