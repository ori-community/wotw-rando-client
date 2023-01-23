#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate__Class.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate.h>

namespace app::classes::types {
    namespace UberGhostTrailMeshUpdate {
        namespace {
            inline app::UberGhostTrailMeshUpdate__Class* type_info_ref = nullptr;
        }
        inline app::UberGhostTrailMeshUpdate__Class** type_info = &type_info_ref;
        inline app::UberGhostTrailMeshUpdate__Class* get_class() {
            return il2cpp::get_class<app::UberGhostTrailMeshUpdate__Class>(type_info, "", "UberGhostTrailMeshUpdate");
        }
        inline app::UberGhostTrailMeshUpdate* create() {
            return il2cpp::create_object<app::UberGhostTrailMeshUpdate>(get_class());
        }
    } // namespace UberGhostTrailMeshUpdate
} // namespace app::classes::types
