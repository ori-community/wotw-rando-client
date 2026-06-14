#pragma once
#include <Modloader/app/structs/RespawningPlaceholderSpawnAction.h>
#include <Modloader/app/structs/RespawningPlaceholderSpawnAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RespawningPlaceholderSpawnAction {
        inline app::RespawningPlaceholderSpawnAction__Class** type_info() {
            static app::RespawningPlaceholderSpawnAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RespawningPlaceholderSpawnAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RespawningPlaceholderSpawnAction__Class* get_class() {
            return il2cpp::get_class<app::RespawningPlaceholderSpawnAction__Class>(type_info(), "", "RespawningPlaceholderSpawnAction");
        }
        inline app::RespawningPlaceholderSpawnAction* create() {
            return il2cpp::create_object<app::RespawningPlaceholderSpawnAction>(get_class());
        }
    } // namespace RespawningPlaceholderSpawnAction
} // namespace app::classes::types
