#pragma once
#include <Modloader/app/structs/GameController_LoadAssets_d_182.h>
#include <Modloader/app/structs/GameController_LoadAssets_d_182__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameController_LoadAssets_d_182 {
        inline app::GameController_LoadAssets_d_182__Class** type_info() {
            static app::GameController_LoadAssets_d_182__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameController_LoadAssets_d_182__Class**)(modloader::win::memory::resolve_rva(0x0478CF88));
            }
            return cache;
        }
        inline app::GameController_LoadAssets_d_182__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_LoadAssets_d_182__Class>(type_info(), "", "GameController", "<LoadAssets>d__182");
        }
        inline app::GameController_LoadAssets_d_182* create() {
            return il2cpp::create_object<app::GameController_LoadAssets_d_182>(get_class());
        }
    } // namespace GameController_LoadAssets_d_182
} // namespace app::classes::types
