#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISpiritLeashAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISpiritLeashAttackable__Class** type_info;
        inline app::ISpiritLeashAttackable__Class* get_class() {
            return il2cpp::get_class<app::ISpiritLeashAttackable__Class>(type_info, "", "ISpiritLeashAttackable");
        }
    } // namespace ISpiritLeashAttackable
} // namespace app::classes::types
