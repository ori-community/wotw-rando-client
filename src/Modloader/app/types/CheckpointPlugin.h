#pragma once
#include <Modloader/app/structs/CheckpointPlugin.h>
#include <Modloader/app/structs/CheckpointPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CheckpointPlugin {
        inline app::CheckpointPlugin__Class** type_info() {
            static app::CheckpointPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CheckpointPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CheckpointPlugin__Class* get_class() {
            return il2cpp::get_class<app::CheckpointPlugin__Class>(type_info(), "", "CheckpointPlugin");
        }
        inline app::CheckpointPlugin* create() {
            return il2cpp::create_object<app::CheckpointPlugin>(get_class());
        }
    } // namespace CheckpointPlugin
} // namespace app::classes::types
