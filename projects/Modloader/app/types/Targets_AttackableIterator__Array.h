#pragma once
#include <Modloader/app/structs/Targets_AttackableIterator__Array.h>
#include <Modloader/app/structs/Targets_AttackableIterator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Targets_AttackableIterator__Array {
        inline app::Targets_AttackableIterator__Array__Class** type_info() {
            static app::Targets_AttackableIterator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Targets_AttackableIterator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Targets_AttackableIterator__Array__Class* get_class() {
            return il2cpp::get_class<app::Targets_AttackableIterator__Array__Class>(type_info(), "Game", "Targets+AttackableIterator[]");
        }
        inline app::Targets_AttackableIterator__Array* create() {
            return il2cpp::create_object<app::Targets_AttackableIterator__Array>(get_class());
        }
    } // namespace Targets_AttackableIterator__Array
} // namespace app::classes::types
