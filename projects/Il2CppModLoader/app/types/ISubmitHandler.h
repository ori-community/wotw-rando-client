#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISubmitHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISubmitHandler__Class** type_info;
        inline app::ISubmitHandler__Class* get_class() {
            return il2cpp::get_class<app::ISubmitHandler__Class>(type_info, "UnityEngine.EventSystems", "ISubmitHandler");
        }
        inline app::ISubmitHandler* create() {
            return il2cpp::create_object<app::ISubmitHandler>(get_class());
        }
    } // namespace ISubmitHandler
} // namespace app::classes::types
