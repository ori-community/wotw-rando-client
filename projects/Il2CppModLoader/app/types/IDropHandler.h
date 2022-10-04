#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDropHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDropHandler__Class** type_info;
        inline app::IDropHandler__Class* get_class() {
            return il2cpp::get_class<app::IDropHandler__Class>(type_info, "UnityEngine.EventSystems", "IDropHandler");
        }
        inline app::IDropHandler* create() {
            return il2cpp::create_object<app::IDropHandler>(get_class());
        }
    } // namespace IDropHandler
} // namespace app::classes::types
