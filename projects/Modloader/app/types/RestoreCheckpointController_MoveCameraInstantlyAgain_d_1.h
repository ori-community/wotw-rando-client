#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__Class.h>
#include <Modloader/app/structs/RestoreCheckpointController_MoveCameraInstantlyAgain_d_1.h>

namespace app::classes::types {
    namespace RestoreCheckpointController_MoveCameraInstantlyAgain_d_1 {
        inline app::RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__Class** type_info = (app::RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__Class**)(modloader::win::memory::resolve_rva(0x04793C70));
        inline app::RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__Class* get_class() {
            return il2cpp::get_nested_class<app::RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__Class>(type_info, "", "RestoreCheckpointController", "<MoveCameraInstantlyAgain>d__1");
        }
        inline app::RestoreCheckpointController_MoveCameraInstantlyAgain_d_1* create() {
            return il2cpp::create_object<app::RestoreCheckpointController_MoveCameraInstantlyAgain_d_1>(get_class());
        }
    } // namespace RestoreCheckpointController_MoveCameraInstantlyAgain_d_1
} // namespace app::classes::types
