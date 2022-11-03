#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameController_WarmUpResourcesRoutine_d_191 {
        inline app::GameController_WarmUpResourcesRoutine_d_191__Class** type_info = (app::GameController_WarmUpResourcesRoutine_d_191__Class**)(modloader::win::memory::resolve_rva(0x04715BA0));
        inline app::GameController_WarmUpResourcesRoutine_d_191__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_WarmUpResourcesRoutine_d_191__Class>(type_info, "", "GameController", "<WarmUpResourcesRoutine>d__191");
        }
        inline app::GameController_WarmUpResourcesRoutine_d_191* create() {
            return il2cpp::create_object<app::GameController_WarmUpResourcesRoutine_d_191>(get_class());
        }
    } // namespace GameController_WarmUpResourcesRoutine_d_191
} // namespace app::classes::types
