#pragma once
#include <Modloader/app/structs/CheckpointRestrictZone__Array.h>
#include <Modloader/app/structs/CheckpointRestrictZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CheckpointRestrictZone__Array {
        inline app::CheckpointRestrictZone__Array__Class** type_info() {
            static app::CheckpointRestrictZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CheckpointRestrictZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CheckpointRestrictZone__Array__Class* get_class() {
            return il2cpp::get_class<app::CheckpointRestrictZone__Array__Class>(type_info(), "", "CheckpointRestrictZone[]");
        }
        inline app::CheckpointRestrictZone__Array* create() {
            return il2cpp::create_object<app::CheckpointRestrictZone__Array>(get_class());
        }
    } // namespace CheckpointRestrictZone__Array
} // namespace app::classes::types
