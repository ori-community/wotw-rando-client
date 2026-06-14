#pragma once
#include <Modloader/app/structs/CheckpointData__Array.h>
#include <Modloader/app/structs/CheckpointData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CheckpointData__Array {
        inline app::CheckpointData__Array__Class** type_info() {
            static app::CheckpointData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CheckpointData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CheckpointData__Array__Class* get_class() {
            return il2cpp::get_class<app::CheckpointData__Array__Class>(type_info(), "", "CheckpointData[]");
        }
        inline app::CheckpointData__Array* create() {
            return il2cpp::create_object<app::CheckpointData__Array>(get_class());
        }
    } // namespace CheckpointData__Array
} // namespace app::classes::types
