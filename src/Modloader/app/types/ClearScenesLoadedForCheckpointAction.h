#pragma once
#include <Modloader/app/structs/ClearScenesLoadedForCheckpointAction.h>
#include <Modloader/app/structs/ClearScenesLoadedForCheckpointAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClearScenesLoadedForCheckpointAction {
        inline app::ClearScenesLoadedForCheckpointAction__Class** type_info() {
            static app::ClearScenesLoadedForCheckpointAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClearScenesLoadedForCheckpointAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClearScenesLoadedForCheckpointAction__Class* get_class() {
            return il2cpp::get_class<app::ClearScenesLoadedForCheckpointAction__Class>(type_info(), "", "ClearScenesLoadedForCheckpointAction");
        }
        inline app::ClearScenesLoadedForCheckpointAction* create() {
            return il2cpp::create_object<app::ClearScenesLoadedForCheckpointAction>(get_class());
        }
    } // namespace ClearScenesLoadedForCheckpointAction
} // namespace app::classes::types
