#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseEventData {
        inline app::BaseEventData__Class** type_info = (app::BaseEventData__Class**)(modloader::win::memory::resolve_rva(0x04791630));
        inline app::BaseEventData__Class* get_class() {
            return il2cpp::get_class<app::BaseEventData__Class>(type_info, "UnityEngine.EventSystems", "BaseEventData");
        }
        inline app::BaseEventData* create() {
            return il2cpp::create_object<app::BaseEventData>(get_class());
        }
    } // namespace BaseEventData
} // namespace app::classes::types
