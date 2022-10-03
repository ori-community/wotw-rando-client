#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RestoreCheckpointAnimatorEntity {
        namespace {
            app::RestoreCheckpointAnimatorEntity__Class* type_info_ref = nullptr;
        }
        app::RestoreCheckpointAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::RestoreCheckpointAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::RestoreCheckpointAnimatorEntity__Class>(type_info, "", "RestoreCheckpointAnimatorEntity");
        }
        inline app::RestoreCheckpointAnimatorEntity* create() {
            return il2cpp::create_object<app::RestoreCheckpointAnimatorEntity>(get_class());
        }
    } // namespace RestoreCheckpointAnimatorEntity
} // namespace app::classes::types
