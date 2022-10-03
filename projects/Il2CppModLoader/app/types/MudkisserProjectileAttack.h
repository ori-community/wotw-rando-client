#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MudkisserProjectileAttack {
        namespace {
            app::MudkisserProjectileAttack__Class* type_info_ref = nullptr;
        }
        app::MudkisserProjectileAttack__Class** type_info = &type_info_ref;
        inline app::MudkisserProjectileAttack__Class* get_class() {
            return il2cpp::get_class<app::MudkisserProjectileAttack__Class>(type_info, "", "MudkisserProjectileAttack");
        }
        inline app::MudkisserProjectileAttack* create() {
            return il2cpp::create_object<app::MudkisserProjectileAttack>(get_class());
        }
    } // namespace MudkisserProjectileAttack
} // namespace app::classes::types
