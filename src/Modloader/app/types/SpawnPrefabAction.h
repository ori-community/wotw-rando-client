#pragma once
#include <Modloader/app/structs/SpawnPrefabAction.h>
#include <Modloader/app/structs/SpawnPrefabAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpawnPrefabAction {
        inline app::SpawnPrefabAction__Class** type_info() {
            static app::SpawnPrefabAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpawnPrefabAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpawnPrefabAction__Class* get_class() {
            return il2cpp::get_class<app::SpawnPrefabAction__Class>(type_info(), "", "SpawnPrefabAction");
        }
        inline app::SpawnPrefabAction* create() {
            return il2cpp::create_object<app::SpawnPrefabAction>(get_class());
        }
    } // namespace SpawnPrefabAction
} // namespace app::classes::types
