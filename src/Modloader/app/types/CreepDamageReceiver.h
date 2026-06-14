#pragma once
#include <Modloader/app/structs/CreepDamageReceiver.h>
#include <Modloader/app/structs/CreepDamageReceiver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreepDamageReceiver {
        inline app::CreepDamageReceiver__Class** type_info() {
            static app::CreepDamageReceiver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CreepDamageReceiver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CreepDamageReceiver__Class* get_class() {
            return il2cpp::get_class<app::CreepDamageReceiver__Class>(type_info(), "", "CreepDamageReceiver");
        }
        inline app::CreepDamageReceiver* create() {
            return il2cpp::create_object<app::CreepDamageReceiver>(get_class());
        }
    } // namespace CreepDamageReceiver
} // namespace app::classes::types
