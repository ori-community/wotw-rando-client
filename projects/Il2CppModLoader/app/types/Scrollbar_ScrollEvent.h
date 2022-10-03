#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Scrollbar_ScrollEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Scrollbar_ScrollEvent__Class** type_info;
        inline app::Scrollbar_ScrollEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::Scrollbar_ScrollEvent__Class>(type_info, "UnityEngine.UI", "Scrollbar", "ScrollEvent");
        }
        inline app::Scrollbar_ScrollEvent* create() {
            return il2cpp::create_object<app::Scrollbar_ScrollEvent>(get_class());
        }
    } // namespace Scrollbar_ScrollEvent
} // namespace app::classes::types
