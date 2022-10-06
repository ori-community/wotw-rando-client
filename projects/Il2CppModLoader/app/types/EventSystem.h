#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventSystem__Class** type_info;
        inline app::EventSystem__Class* get_class() {
            return il2cpp::get_class<app::EventSystem__Class>(type_info, "UnityEngine.EventSystems", "EventSystem");
        }
        inline app::EventSystem* create() {
            return il2cpp::create_object<app::EventSystem>(get_class());
        }
        inline app::EventSystem__Array* create_array(int size) {
            return il2cpp::array_new<app::EventSystem__Array>(get_class(), size);
        }
        inline app::EventSystem__Array* create_array(const std::vector<app::EventSystem*>& items) {
            return il2cpp::array_new<app::EventSystem__Array>(get_class(), items);
        }
    } // namespace EventSystem
} // namespace app::classes::types
