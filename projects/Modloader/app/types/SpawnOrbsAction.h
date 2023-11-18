#pragma once
#include <Modloader/app/structs/SpawnOrbsAction.h>
#include <Modloader/app/structs/SpawnOrbsAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpawnOrbsAction {
        inline app::SpawnOrbsAction__Class** type_info() {
            static app::SpawnOrbsAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpawnOrbsAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpawnOrbsAction__Class* get_class() {
            return il2cpp::get_class<app::SpawnOrbsAction__Class>(type_info(), "", "SpawnOrbsAction");
        }
        inline app::SpawnOrbsAction* create() {
            return il2cpp::create_object<app::SpawnOrbsAction>(get_class());
        }
    } // namespace SpawnOrbsAction
} // namespace app::classes::types
