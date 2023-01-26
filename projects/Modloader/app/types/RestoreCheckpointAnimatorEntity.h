#pragma once
#include <Modloader/app/structs/RestoreCheckpointAnimatorEntity.h>
#include <Modloader/app/structs/RestoreCheckpointAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RestoreCheckpointAnimatorEntity {
        inline app::RestoreCheckpointAnimatorEntity__Class** type_info() {
            static app::RestoreCheckpointAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RestoreCheckpointAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RestoreCheckpointAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::RestoreCheckpointAnimatorEntity__Class>(type_info(), "", "RestoreCheckpointAnimatorEntity");
        }
        inline app::RestoreCheckpointAnimatorEntity* create() {
            return il2cpp::create_object<app::RestoreCheckpointAnimatorEntity>(get_class());
        }
    } // namespace RestoreCheckpointAnimatorEntity
} // namespace app::classes::types
