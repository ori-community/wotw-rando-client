#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IStompAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IStompAttackable__Class** type_info;
        inline app::IStompAttackable__Class* get_class() {
            return il2cpp::get_class<app::IStompAttackable__Class>(type_info, "", "IStompAttackable");
        }
    } // namespace IStompAttackable
} // namespace app::classes::types
