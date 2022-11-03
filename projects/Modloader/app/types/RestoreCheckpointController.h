#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RestoreCheckpointController {
        inline app::RestoreCheckpointController__Class** type_info = (app::RestoreCheckpointController__Class**)(modloader::win::memory::resolve_rva(0x0475E690));
        inline app::RestoreCheckpointController__Class* get_class() {
            return il2cpp::get_class<app::RestoreCheckpointController__Class>(type_info, "", "RestoreCheckpointController");
        }
        inline app::RestoreCheckpointController* create() {
            return il2cpp::create_object<app::RestoreCheckpointController>(get_class());
        }
    } // namespace RestoreCheckpointController
} // namespace app::classes::types
