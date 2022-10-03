#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwarmEntityTargeting {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SwarmEntityTargeting__Class** type_info;
        inline app::SwarmEntityTargeting__Class* get_class() {
            return il2cpp::get_class<app::SwarmEntityTargeting__Class>(type_info, "", "SwarmEntityTargeting");
        }
        inline app::SwarmEntityTargeting* create() {
            return il2cpp::create_object<app::SwarmEntityTargeting>(get_class());
        }
    } // namespace SwarmEntityTargeting
} // namespace app::classes::types
