#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameTimer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameTimer__Class** type_info;
        inline app::GameTimer__Class* get_class() {
            return il2cpp::get_class<app::GameTimer__Class>(type_info, "", "GameTimer");
        }
        inline app::GameTimer* create() {
            return il2cpp::create_object<app::GameTimer>(get_class());
        }
    } // namespace GameTimer
} // namespace app::classes::types
