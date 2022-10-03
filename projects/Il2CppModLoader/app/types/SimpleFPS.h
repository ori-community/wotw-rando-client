#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleFPS {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleFPS__Class** type_info;
        inline app::SimpleFPS__Class* get_class() {
            return il2cpp::get_class<app::SimpleFPS__Class>(type_info, "", "SimpleFPS");
        }
        inline app::SimpleFPS* create() {
            return il2cpp::create_object<app::SimpleFPS>(get_class());
        }
    } // namespace SimpleFPS
} // namespace app::classes::types
