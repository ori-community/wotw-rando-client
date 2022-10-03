#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameController_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameController_c__Class** type_info;
        inline app::GameController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_c__Class>(type_info, "", "GameController", "<>c");
        }
        inline app::GameController_c* create() {
            return il2cpp::create_object<app::GameController_c>(get_class());
        }
    } // namespace GameController_c
} // namespace app::classes::types
