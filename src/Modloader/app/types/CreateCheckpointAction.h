#pragma once
#include <Modloader/app/structs/CreateCheckpointAction.h>
#include <Modloader/app/structs/CreateCheckpointAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateCheckpointAction {
        inline app::CreateCheckpointAction__Class** type_info() {
            static app::CreateCheckpointAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CreateCheckpointAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CreateCheckpointAction__Class* get_class() {
            return il2cpp::get_class<app::CreateCheckpointAction__Class>(type_info(), "", "CreateCheckpointAction");
        }
        inline app::CreateCheckpointAction* create() {
            return il2cpp::create_object<app::CreateCheckpointAction>(get_class());
        }
    } // namespace CreateCheckpointAction
} // namespace app::classes::types
