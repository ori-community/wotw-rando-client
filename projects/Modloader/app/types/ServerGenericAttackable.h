#pragma once
#include <Modloader/app/structs/ServerGenericAttackable.h>
#include <Modloader/app/structs/ServerGenericAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerGenericAttackable {
        inline app::ServerGenericAttackable__Class** type_info() {
            static app::ServerGenericAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerGenericAttackable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerGenericAttackable__Class* get_class() {
            return il2cpp::get_class<app::ServerGenericAttackable__Class>(type_info(), "", "ServerGenericAttackable");
        }
        inline app::ServerGenericAttackable* create() {
            return il2cpp::create_object<app::ServerGenericAttackable>(get_class());
        }
    } // namespace ServerGenericAttackable
} // namespace app::classes::types
