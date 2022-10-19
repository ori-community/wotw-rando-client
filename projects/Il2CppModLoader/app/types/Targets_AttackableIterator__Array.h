#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Targets_AttackableIterator__Array {
        namespace {
            inline app::Targets_AttackableIterator__Array__Class* type_info_ref = nullptr;
        }
        inline app::Targets_AttackableIterator__Array__Class** type_info = &type_info_ref;
        inline app::Targets_AttackableIterator__Array__Class* get_class() {
            return il2cpp::get_class<app::Targets_AttackableIterator__Array__Class>(type_info, "Game", "Targets+AttackableIterator[]");
        }
        inline app::Targets_AttackableIterator__Array* create() {
            return il2cpp::create_object<app::Targets_AttackableIterator__Array>(get_class());
        }
    } // namespace Targets_AttackableIterator__Array
} // namespace app::classes::types
