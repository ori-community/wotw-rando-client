#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CreateCheckpointEntity__Class.h>
#include <Modloader/app/structs/CreateCheckpointEntity.h>

namespace app::classes::types {
    namespace CreateCheckpointEntity {
        namespace {
            inline app::CreateCheckpointEntity__Class* type_info_ref = nullptr;
        }
        inline app::CreateCheckpointEntity__Class** type_info = &type_info_ref;
        inline app::CreateCheckpointEntity__Class* get_class() {
            return il2cpp::get_class<app::CreateCheckpointEntity__Class>(type_info, "Moon.Timeline", "CreateCheckpointEntity");
        }
        inline app::CreateCheckpointEntity* create() {
            return il2cpp::create_object<app::CreateCheckpointEntity>(get_class());
        }
    } // namespace CreateCheckpointEntity
} // namespace app::classes::types
