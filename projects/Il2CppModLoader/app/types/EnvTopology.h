#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnvTopology {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnvTopology__Class** type_info;
        inline app::EnvTopology__Class* get_class() {
            return il2cpp::get_class<app::EnvTopology__Class>(type_info, "", "EnvTopology");
        }
        inline app::EnvTopology* create() {
            return il2cpp::create_object<app::EnvTopology>(get_class());
        }
    } // namespace EnvTopology
} // namespace app::classes::types
