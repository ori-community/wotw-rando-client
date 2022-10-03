#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExitGUIException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExitGUIException__Class** type_info;
        inline app::ExitGUIException__Class* get_class() {
            return il2cpp::get_class<app::ExitGUIException__Class>(type_info, "UnityEngine", "ExitGUIException");
        }
        inline app::ExitGUIException* create() {
            return il2cpp::create_object<app::ExitGUIException>(get_class());
        }
    } // namespace ExitGUIException
} // namespace app::classes::types
