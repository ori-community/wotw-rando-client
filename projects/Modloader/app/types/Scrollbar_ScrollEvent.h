#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Scrollbar_ScrollEvent__Class.h>
#include <Modloader/app/structs/Scrollbar_ScrollEvent.h>

namespace app::classes::types {
    namespace Scrollbar_ScrollEvent {
        inline app::Scrollbar_ScrollEvent__Class** type_info = (app::Scrollbar_ScrollEvent__Class**)(modloader::win::memory::resolve_rva(0x047365E8));
        inline app::Scrollbar_ScrollEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::Scrollbar_ScrollEvent__Class>(type_info, "UnityEngine.UI", "Scrollbar", "ScrollEvent");
        }
        inline app::Scrollbar_ScrollEvent* create() {
            return il2cpp::create_object<app::Scrollbar_ScrollEvent>(get_class());
        }
    } // namespace Scrollbar_ScrollEvent
} // namespace app::classes::types
