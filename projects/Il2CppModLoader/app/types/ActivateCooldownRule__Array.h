#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateCooldownRule__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActivateCooldownRule__Array__Class** type_info;
        inline app::ActivateCooldownRule__Array__Class* get_class() {
            return il2cpp::get_class<app::ActivateCooldownRule__Array__Class>(type_info, "", "ActivateCooldownRule[]");
        }
        inline app::ActivateCooldownRule__Array* create() {
            return il2cpp::create_object<app::ActivateCooldownRule__Array>(get_class());
        }
    } // namespace ActivateCooldownRule__Array
} // namespace app::classes::types
