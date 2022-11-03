#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameController_LoadAssets_d_182 {
        inline app::GameController_LoadAssets_d_182__Class** type_info = (app::GameController_LoadAssets_d_182__Class**)(modloader::win::memory::resolve_rva(0x0478CF88));
        inline app::GameController_LoadAssets_d_182__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_LoadAssets_d_182__Class>(type_info, "", "GameController", "<LoadAssets>d__182");
        }
        inline app::GameController_LoadAssets_d_182* create() {
            return il2cpp::create_object<app::GameController_LoadAssets_d_182>(get_class());
        }
    } // namespace GameController_LoadAssets_d_182
} // namespace app::classes::types
