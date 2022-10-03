#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseEventData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BaseEventData__Class** type_info;
        inline app::BaseEventData__Class* get_class() {
            return il2cpp::get_class<app::BaseEventData__Class>(type_info, "UnityEngine.EventSystems", "BaseEventData");
        }
        inline app::BaseEventData* create() {
            return il2cpp::create_object<app::BaseEventData>(get_class());
        }
    } // namespace BaseEventData
} // namespace app::classes::types
