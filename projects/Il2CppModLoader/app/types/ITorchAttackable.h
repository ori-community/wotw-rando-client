#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITorchAttackable {
        inline app::ITorchAttackable__Class** type_info = (app::ITorchAttackable__Class**)(modloader::win::memory::resolve_rva(0x0471E0E8));
        inline app::ITorchAttackable__Class* get_class() {
            return il2cpp::get_class<app::ITorchAttackable__Class>(type_info, "", "ITorchAttackable");
        }
    } // namespace ITorchAttackable
} // namespace app::classes::types
