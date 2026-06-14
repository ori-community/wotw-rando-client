#pragma once
#include <Modloader/app/structs/SpawnEntityAction.h>
#include <Modloader/app/structs/SpawnEntityAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpawnEntityAction {
        inline app::SpawnEntityAction__Class** type_info() {
            static app::SpawnEntityAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpawnEntityAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpawnEntityAction__Class* get_class() {
            return il2cpp::get_class<app::SpawnEntityAction__Class>(type_info(), "", "SpawnEntityAction");
        }
        inline app::SpawnEntityAction* create() {
            return il2cpp::create_object<app::SpawnEntityAction>(get_class());
        }
    } // namespace SpawnEntityAction
} // namespace app::classes::types
