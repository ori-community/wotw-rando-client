#pragma once
#include <Modloader/app/structs/GhostReplayMetaData__Array.h>
#include <Modloader/app/structs/GhostReplayMetaData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostReplayMetaData__Array {
        inline app::GhostReplayMetaData__Array__Class** type_info() {
            static app::GhostReplayMetaData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostReplayMetaData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostReplayMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostReplayMetaData__Array__Class>(type_info(), "", "GhostReplayMetaData[]");
        }
        inline app::GhostReplayMetaData__Array* create() {
            return il2cpp::create_object<app::GhostReplayMetaData__Array>(get_class());
        }
    } // namespace GhostReplayMetaData__Array
} // namespace app::classes::types
