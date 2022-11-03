#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PointerInputModule_MouseButtonEventData {
        inline app::PointerInputModule_MouseButtonEventData__Class** type_info = (app::PointerInputModule_MouseButtonEventData__Class**)(modloader::win::memory::resolve_rva(0x04768930));
        inline app::PointerInputModule_MouseButtonEventData__Class* get_class() {
            return il2cpp::get_nested_class<app::PointerInputModule_MouseButtonEventData__Class>(type_info, "UnityEngine.EventSystems", "PointerInputModule", "MouseButtonEventData");
        }
        inline app::PointerInputModule_MouseButtonEventData* create() {
            return il2cpp::create_object<app::PointerInputModule_MouseButtonEventData>(get_class());
        }
    } // namespace PointerInputModule_MouseButtonEventData
} // namespace app::classes::types
