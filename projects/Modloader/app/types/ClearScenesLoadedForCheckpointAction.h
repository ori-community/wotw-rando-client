#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ClearScenesLoadedForCheckpointAction__Class.h>
#include <Modloader/app/structs/ClearScenesLoadedForCheckpointAction.h>

namespace app::classes::types {
    namespace ClearScenesLoadedForCheckpointAction {
        namespace {
            inline app::ClearScenesLoadedForCheckpointAction__Class* type_info_ref = nullptr;
        }
        inline app::ClearScenesLoadedForCheckpointAction__Class** type_info = &type_info_ref;
        inline app::ClearScenesLoadedForCheckpointAction__Class* get_class() {
            return il2cpp::get_class<app::ClearScenesLoadedForCheckpointAction__Class>(type_info, "", "ClearScenesLoadedForCheckpointAction");
        }
        inline app::ClearScenesLoadedForCheckpointAction* create() {
            return il2cpp::create_object<app::ClearScenesLoadedForCheckpointAction>(get_class());
        }
    } // namespace ClearScenesLoadedForCheckpointAction
} // namespace app::classes::types
