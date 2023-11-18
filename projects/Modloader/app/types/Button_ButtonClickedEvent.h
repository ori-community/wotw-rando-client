#pragma once
#include <Modloader/app/structs/Button_ButtonClickedEvent.h>
#include <Modloader/app/structs/Button_ButtonClickedEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Button_ButtonClickedEvent {
        inline app::Button_ButtonClickedEvent__Class** type_info() {
            static app::Button_ButtonClickedEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Button_ButtonClickedEvent__Class**)(modloader::win::memory::resolve_rva(0x0472F270));
            }
            return cache;
        }
        inline app::Button_ButtonClickedEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::Button_ButtonClickedEvent__Class>(type_info(), "UnityEngine.UI", "Button", "ButtonClickedEvent");
        }
        inline app::Button_ButtonClickedEvent* create() {
            return il2cpp::create_object<app::Button_ButtonClickedEvent>(get_class());
        }
    } // namespace Button_ButtonClickedEvent
} // namespace app::classes::types
