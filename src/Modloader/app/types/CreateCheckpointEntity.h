#pragma once
#include <Modloader/app/structs/CreateCheckpointEntity.h>
#include <Modloader/app/structs/CreateCheckpointEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateCheckpointEntity {
        inline app::CreateCheckpointEntity__Class** type_info() {
            static app::CreateCheckpointEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CreateCheckpointEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CreateCheckpointEntity__Class* get_class() {
            return il2cpp::get_class<app::CreateCheckpointEntity__Class>(type_info(), "Moon.Timeline", "CreateCheckpointEntity");
        }
        inline app::CreateCheckpointEntity* create() {
            return il2cpp::create_object<app::CreateCheckpointEntity>(get_class());
        }
    } // namespace CreateCheckpointEntity
} // namespace app::classes::types
