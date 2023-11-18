#pragma once
#include <Modloader/app/structs/Toggle_ToggleEvent.h>
#include <Modloader/app/structs/Toggle_ToggleEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Toggle_ToggleEvent {
        inline app::Toggle_ToggleEvent__Class** type_info() {
            static app::Toggle_ToggleEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Toggle_ToggleEvent__Class**)(modloader::win::memory::resolve_rva(0x04737EC8));
            }
            return cache;
        }
        inline app::Toggle_ToggleEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::Toggle_ToggleEvent__Class>(type_info(), "UnityEngine.UI", "Toggle", "ToggleEvent");
        }
        inline app::Toggle_ToggleEvent* create() {
            return il2cpp::create_object<app::Toggle_ToggleEvent>(get_class());
        }
    } // namespace Toggle_ToggleEvent
} // namespace app::classes::types
