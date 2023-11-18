#pragma once
#include <Modloader/app/structs/SeinGrenadeAttack.h>
#include <Modloader/app/structs/SeinGrenadeAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrenadeAttack {
        inline app::SeinGrenadeAttack__Class** type_info() {
            static app::SeinGrenadeAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrenadeAttack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrenadeAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinGrenadeAttack__Class>(type_info(), "", "SeinGrenadeAttack");
        }
        inline app::SeinGrenadeAttack* create() {
            return il2cpp::create_object<app::SeinGrenadeAttack>(get_class());
        }
    } // namespace SeinGrenadeAttack
} // namespace app::classes::types
