#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IStompAttackable {
        inline app::IStompAttackable__Class** type_info = (app::IStompAttackable__Class**)(modloader::win::memory::resolve_rva(0x047645B8));
        inline app::IStompAttackable__Class* get_class() {
            return il2cpp::get_class<app::IStompAttackable__Class>(type_info, "", "IStompAttackable");
        }
    } // namespace IStompAttackable
} // namespace app::classes::types
