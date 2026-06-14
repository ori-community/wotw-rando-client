#pragma once
#include <Modloader/app/structs/SpawnWormsAttack.h>
#include <Modloader/app/structs/SpawnWormsAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpawnWormsAttack {
        inline app::SpawnWormsAttack__Class** type_info() {
            static app::SpawnWormsAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpawnWormsAttack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpawnWormsAttack__Class* get_class() {
            return il2cpp::get_class<app::SpawnWormsAttack__Class>(type_info(), "", "SpawnWormsAttack");
        }
        inline app::SpawnWormsAttack* create() {
            return il2cpp::create_object<app::SpawnWormsAttack>(get_class());
        }
    } // namespace SpawnWormsAttack
} // namespace app::classes::types
