#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartController_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CartController_c__Class** type_info;
        inline app::CartController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CartController_c__Class>(type_info, "", "CartController", "<>c");
        }
        inline app::CartController_c* create() {
            return il2cpp::create_object<app::CartController_c>(get_class());
        }
    } // namespace CartController_c
} // namespace app::classes::types
