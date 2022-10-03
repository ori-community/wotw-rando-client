#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlHurtState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DashOwlHurtState__Class** type_info;
        inline app::DashOwlHurtState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlHurtState__Class>(type_info, "", "DashOwlHurtState");
        }
        inline app::DashOwlHurtState* create() {
            return il2cpp::create_object<app::DashOwlHurtState>(get_class());
        }
    } // namespace DashOwlHurtState
} // namespace app::classes::types
