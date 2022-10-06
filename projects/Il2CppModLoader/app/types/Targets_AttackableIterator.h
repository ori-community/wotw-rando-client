#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Targets_AttackableIterator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Targets_AttackableIterator__Class** type_info;
        inline app::Targets_AttackableIterator__Class* get_class() {
            return il2cpp::get_nested_class<app::Targets_AttackableIterator__Class>(type_info, "Game", "Targets", "AttackableIterator");
        }
        inline app::Targets_AttackableIterator* create() {
            return il2cpp::create_object<app::Targets_AttackableIterator>(get_class());
        }
        inline app::Targets_AttackableIterator__Array* create_array(int size) {
            return il2cpp::array_new<app::Targets_AttackableIterator__Array>(get_class(), size);
        }
        inline app::Targets_AttackableIterator__Array* create_array(const std::vector<app::Targets_AttackableIterator*>& items) {
            return il2cpp::array_new<app::Targets_AttackableIterator__Array>(get_class(), items);
        }
    } // namespace Targets_AttackableIterator
} // namespace app::classes::types
