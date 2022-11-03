#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RestoreCheckpointAction {
        namespace {
            inline app::RestoreCheckpointAction__Class* type_info_ref = nullptr;
        }
        inline app::RestoreCheckpointAction__Class** type_info = &type_info_ref;
        inline app::RestoreCheckpointAction__Class* get_class() {
            return il2cpp::get_class<app::RestoreCheckpointAction__Class>(type_info, "", "RestoreCheckpointAction");
        }
        inline app::RestoreCheckpointAction* create() {
            return il2cpp::create_object<app::RestoreCheckpointAction>(get_class());
        }
    } // namespace RestoreCheckpointAction
} // namespace app::classes::types
