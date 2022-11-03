#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Button_ButtonClickedEvent {
        inline app::Button_ButtonClickedEvent__Class** type_info = (app::Button_ButtonClickedEvent__Class**)(modloader::win::memory::resolve_rva(0x0472F270));
        inline app::Button_ButtonClickedEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::Button_ButtonClickedEvent__Class>(type_info, "UnityEngine.UI", "Button", "ButtonClickedEvent");
        }
        inline app::Button_ButtonClickedEvent* create() {
            return il2cpp::create_object<app::Button_ButtonClickedEvent>(get_class());
        }
    } // namespace Button_ButtonClickedEvent
} // namespace app::classes::types
