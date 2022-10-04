#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBashAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBashAttackable__Class** type_info;
        inline app::IBashAttackable__Class* get_class() {
            return il2cpp::get_class<app::IBashAttackable__Class>(type_info, "", "IBashAttackable");
        }
    } // namespace IBashAttackable
} // namespace app::classes::types
