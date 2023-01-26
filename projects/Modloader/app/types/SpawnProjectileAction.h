#pragma once
#include <Modloader/app/structs/SpawnProjectileAction.h>
#include <Modloader/app/structs/SpawnProjectileAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpawnProjectileAction {
        inline app::SpawnProjectileAction__Class** type_info() {
            static app::SpawnProjectileAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpawnProjectileAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpawnProjectileAction__Class* get_class() {
            return il2cpp::get_class<app::SpawnProjectileAction__Class>(type_info(), "", "SpawnProjectileAction");
        }
        inline app::SpawnProjectileAction* create() {
            return il2cpp::create_object<app::SpawnProjectileAction>(get_class());
        }
    } // namespace SpawnProjectileAction
} // namespace app::classes::types
