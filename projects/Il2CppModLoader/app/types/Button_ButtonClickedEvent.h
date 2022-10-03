#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Button_ButtonClickedEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Button_ButtonClickedEvent__Class** type_info;
        inline app::Button_ButtonClickedEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::Button_ButtonClickedEvent__Class>(type_info, "UnityEngine.UI", "Button", "ButtonClickedEvent");
        }
        inline app::Button_ButtonClickedEvent* create() {
            return il2cpp::create_object<app::Button_ButtonClickedEvent>(get_class());
        }
    } // namespace Button_ButtonClickedEvent
} // namespace app::classes::types
