#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISpiritSlashAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISpiritSlashAttackable__Class** type_info;
        inline app::ISpiritSlashAttackable__Class* get_class() {
            return il2cpp::get_class<app::ISpiritSlashAttackable__Class>(type_info, "", "ISpiritSlashAttackable");
        }
    } // namespace ISpiritSlashAttackable
} // namespace app::classes::types
