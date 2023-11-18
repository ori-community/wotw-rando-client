#pragma once
#include <Modloader/app/structs/GameController_WarmUpResourcesRoutine_d_191.h>
#include <Modloader/app/structs/GameController_WarmUpResourcesRoutine_d_191__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameController_WarmUpResourcesRoutine_d_191 {
        inline app::GameController_WarmUpResourcesRoutine_d_191__Class** type_info() {
            static app::GameController_WarmUpResourcesRoutine_d_191__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameController_WarmUpResourcesRoutine_d_191__Class**)(modloader::win::memory::resolve_rva(0x04715BA0));
            }
            return cache;
        }
        inline app::GameController_WarmUpResourcesRoutine_d_191__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_WarmUpResourcesRoutine_d_191__Class>(type_info(), "", "GameController", "<WarmUpResourcesRoutine>d__191");
        }
        inline app::GameController_WarmUpResourcesRoutine_d_191* create() {
            return il2cpp::create_object<app::GameController_WarmUpResourcesRoutine_d_191>(get_class());
        }
    } // namespace GameController_WarmUpResourcesRoutine_d_191
} // namespace app::classes::types
