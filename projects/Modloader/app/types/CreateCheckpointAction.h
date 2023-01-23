#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CreateCheckpointAction__Class.h>
#include <Modloader/app/structs/CreateCheckpointAction.h>

namespace app::classes::types {
    namespace CreateCheckpointAction {
        namespace {
            inline app::CreateCheckpointAction__Class* type_info_ref = nullptr;
        }
        inline app::CreateCheckpointAction__Class** type_info = &type_info_ref;
        inline app::CreateCheckpointAction__Class* get_class() {
            return il2cpp::get_class<app::CreateCheckpointAction__Class>(type_info, "", "CreateCheckpointAction");
        }
        inline app::CreateCheckpointAction* create() {
            return il2cpp::create_object<app::CreateCheckpointAction>(get_class());
        }
    } // namespace CreateCheckpointAction
} // namespace app::classes::types
