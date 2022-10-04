#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICancelHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICancelHandler__Class** type_info;
        inline app::ICancelHandler__Class* get_class() {
            return il2cpp::get_class<app::ICancelHandler__Class>(type_info, "UnityEngine.EventSystems", "ICancelHandler");
        }
        inline app::ICancelHandler* create() {
            return il2cpp::create_object<app::ICancelHandler>(get_class());
        }
    } // namespace ICancelHandler
} // namespace app::classes::types
