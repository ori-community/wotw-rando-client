#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITorchAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITorchAttackable__Class** type_info;
        inline app::ITorchAttackable__Class* get_class() {
            return il2cpp::get_class<app::ITorchAttackable__Class>(type_info, "", "ITorchAttackable");
        }
        inline app::ITorchAttackable* create() {
            return il2cpp::create_object<app::ITorchAttackable>(get_class());
        }
    } // namespace ITorchAttackable
} // namespace app::classes::types
