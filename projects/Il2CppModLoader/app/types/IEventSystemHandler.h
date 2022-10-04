#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEventSystemHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEventSystemHandler__Class** type_info;
        inline app::IEventSystemHandler__Class* get_class() {
            return il2cpp::get_class<app::IEventSystemHandler__Class>(type_info, "UnityEngine.EventSystems", "IEventSystemHandler");
        }
        inline app::IEventSystemHandler* create() {
            return il2cpp::create_object<app::IEventSystemHandler>(get_class());
        }
        inline app::IEventSystemHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IEventSystemHandler__Array>(get_class(), size);
        }
    } // namespace IEventSystemHandler
} // namespace app::classes::types
