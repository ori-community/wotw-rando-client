#pragma once
#include <Modloader/app/structs/LoadGameWithoutCheckpointRestoreAction.h>
#include <Modloader/app/structs/LoadGameWithoutCheckpointRestoreAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadGameWithoutCheckpointRestoreAction {
        inline app::LoadGameWithoutCheckpointRestoreAction__Class** type_info() {
            static app::LoadGameWithoutCheckpointRestoreAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoadGameWithoutCheckpointRestoreAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoadGameWithoutCheckpointRestoreAction__Class* get_class() {
            return il2cpp::get_class<app::LoadGameWithoutCheckpointRestoreAction__Class>(type_info(), "", "LoadGameWithoutCheckpointRestoreAction");
        }
        inline app::LoadGameWithoutCheckpointRestoreAction* create() {
            return il2cpp::create_object<app::LoadGameWithoutCheckpointRestoreAction>(get_class());
        }
    } // namespace LoadGameWithoutCheckpointRestoreAction
} // namespace app::classes::types
