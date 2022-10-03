#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PointerEventData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PointerEventData__Class** type_info;
        inline app::PointerEventData__Class* get_class() {
            return il2cpp::get_class<app::PointerEventData__Class>(type_info, "UnityEngine.EventSystems", "PointerEventData");
        }
        inline app::PointerEventData* create() {
            return il2cpp::create_object<app::PointerEventData>(get_class());
        }
        inline app::PointerEventData__Array* create_array(int size) {
            return il2cpp::array_new<app::PointerEventData__Array>(get_class(), size);
        }
    } // namespace PointerEventData
} // namespace app::classes::types
