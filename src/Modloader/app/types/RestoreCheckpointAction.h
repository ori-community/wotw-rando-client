#pragma once
#include <Modloader/app/structs/RestoreCheckpointAction.h>
#include <Modloader/app/structs/RestoreCheckpointAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RestoreCheckpointAction {
        inline app::RestoreCheckpointAction__Class** type_info() {
            static app::RestoreCheckpointAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RestoreCheckpointAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RestoreCheckpointAction__Class* get_class() {
            return il2cpp::get_class<app::RestoreCheckpointAction__Class>(type_info(), "", "RestoreCheckpointAction");
        }
        inline app::RestoreCheckpointAction* create() {
            return il2cpp::create_object<app::RestoreCheckpointAction>(get_class());
        }
    } // namespace RestoreCheckpointAction
} // namespace app::classes::types
