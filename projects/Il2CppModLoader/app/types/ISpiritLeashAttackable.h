#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISpiritLeashAttackable {
        inline app::ISpiritLeashAttackable__Class** type_info = (app::ISpiritLeashAttackable__Class**)(modloader::win::memory::resolve_rva(0x047077C8));
        inline app::ISpiritLeashAttackable__Class* get_class() {
            return il2cpp::get_class<app::ISpiritLeashAttackable__Class>(type_info, "", "ISpiritLeashAttackable");
        }
    } // namespace ISpiritLeashAttackable
} // namespace app::classes::types
