#pragma once
#include <Modloader/app/structs/MudkisserProjectileAttack.h>
#include <Modloader/app/structs/MudkisserProjectileAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MudkisserProjectileAttack {
        inline app::MudkisserProjectileAttack__Class** type_info() {
            static app::MudkisserProjectileAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MudkisserProjectileAttack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MudkisserProjectileAttack__Class* get_class() {
            return il2cpp::get_class<app::MudkisserProjectileAttack__Class>(type_info(), "", "MudkisserProjectileAttack");
        }
        inline app::MudkisserProjectileAttack* create() {
            return il2cpp::create_object<app::MudkisserProjectileAttack>(get_class());
        }
    } // namespace MudkisserProjectileAttack
} // namespace app::classes::types
