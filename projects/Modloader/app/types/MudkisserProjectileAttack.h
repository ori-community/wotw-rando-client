#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MudkisserProjectileAttack__Class.h>
#include <Modloader/app/structs/MudkisserProjectileAttack.h>

namespace app::classes::types {
    namespace MudkisserProjectileAttack {
        namespace {
            inline app::MudkisserProjectileAttack__Class* type_info_ref = nullptr;
        }
        inline app::MudkisserProjectileAttack__Class** type_info = &type_info_ref;
        inline app::MudkisserProjectileAttack__Class* get_class() {
            return il2cpp::get_class<app::MudkisserProjectileAttack__Class>(type_info, "", "MudkisserProjectileAttack");
        }
        inline app::MudkisserProjectileAttack* create() {
            return il2cpp::create_object<app::MudkisserProjectileAttack>(get_class());
        }
    } // namespace MudkisserProjectileAttack
} // namespace app::classes::types
