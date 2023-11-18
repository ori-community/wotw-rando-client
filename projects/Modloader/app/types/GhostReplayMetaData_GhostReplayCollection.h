#pragma once
#include <Modloader/app/structs/GhostReplayMetaData_GhostReplayCollection.h>
#include <Modloader/app/structs/GhostReplayMetaData_GhostReplayCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostReplayMetaData_GhostReplayCollection {
        inline app::GhostReplayMetaData_GhostReplayCollection__Class** type_info() {
            static app::GhostReplayMetaData_GhostReplayCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostReplayMetaData_GhostReplayCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostReplayMetaData_GhostReplayCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostReplayMetaData_GhostReplayCollection__Class>(type_info(), "", "GhostReplayMetaData", "GhostReplayCollection");
        }
        inline app::GhostReplayMetaData_GhostReplayCollection* create() {
            return il2cpp::create_object<app::GhostReplayMetaData_GhostReplayCollection>(get_class());
        }
    } // namespace GhostReplayMetaData_GhostReplayCollection
} // namespace app::classes::types
