#pragma once
#include <Modloader/app/structs/GenericAttackable.h>
#include <Modloader/app/structs/GenericAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericAttackable {
        inline app::GenericAttackable__Class** type_info() {
            static app::GenericAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericAttackable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericAttackable__Class* get_class() {
            return il2cpp::get_class<app::GenericAttackable__Class>(type_info(), "", "GenericAttackable");
        }
        inline app::GenericAttackable* create() {
            return il2cpp::create_object<app::GenericAttackable>(get_class());
        }
    } // namespace GenericAttackable
} // namespace app::classes::types
