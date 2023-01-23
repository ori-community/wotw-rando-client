#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RestoreCheckpointAnimatorEntity__Class.h>
#include <Modloader/app/structs/RestoreCheckpointAnimatorEntity.h>

namespace app::classes::types {
    namespace RestoreCheckpointAnimatorEntity {
        namespace {
            inline app::RestoreCheckpointAnimatorEntity__Class* type_info_ref = nullptr;
        }
        inline app::RestoreCheckpointAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::RestoreCheckpointAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::RestoreCheckpointAnimatorEntity__Class>(type_info, "", "RestoreCheckpointAnimatorEntity");
        }
        inline app::RestoreCheckpointAnimatorEntity* create() {
            return il2cpp::create_object<app::RestoreCheckpointAnimatorEntity>(get_class());
        }
    } // namespace RestoreCheckpointAnimatorEntity
} // namespace app::classes::types
