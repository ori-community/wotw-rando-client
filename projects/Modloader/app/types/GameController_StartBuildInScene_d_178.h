#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameController_StartBuildInScene_d_178__Class.h>
#include <Modloader/app/structs/GameController_StartBuildInScene_d_178.h>

namespace app::classes::types {
    namespace GameController_StartBuildInScene_d_178 {
        inline app::GameController_StartBuildInScene_d_178__Class** type_info = (app::GameController_StartBuildInScene_d_178__Class**)(modloader::win::memory::resolve_rva(0x0478E490));
        inline app::GameController_StartBuildInScene_d_178__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_StartBuildInScene_d_178__Class>(type_info, "", "GameController", "<StartBuildInScene>d__178");
        }
        inline app::GameController_StartBuildInScene_d_178* create() {
            return il2cpp::create_object<app::GameController_StartBuildInScene_d_178>(get_class());
        }
    } // namespace GameController_StartBuildInScene_d_178
} // namespace app::classes::types
