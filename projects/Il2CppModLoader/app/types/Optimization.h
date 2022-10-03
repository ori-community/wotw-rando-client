#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Optimization {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Optimization__Class** type_info;
        inline app::Optimization__Class* get_class() {
            return il2cpp::get_class<app::Optimization__Class>(type_info, "Game", "Optimization");
        }
        inline app::Optimization* create() {
            return il2cpp::create_object<app::Optimization>(get_class());
        }
    } // namespace Optimization
} // namespace app::classes::types
