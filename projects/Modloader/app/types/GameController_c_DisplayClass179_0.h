#pragma once
#include <Modloader/app/structs/GameController_c_DisplayClass179_0.h>
#include <Modloader/app/structs/GameController_c_DisplayClass179_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameController_c_DisplayClass179_0 {
        inline app::GameController_c_DisplayClass179_0__Class** type_info() {
            static app::GameController_c_DisplayClass179_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameController_c_DisplayClass179_0__Class**)(modloader::win::memory::resolve_rva(0x04774550));
            }
            return cache;
        }
        inline app::GameController_c_DisplayClass179_0__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_c_DisplayClass179_0__Class>(type_info(), "", "GameController", "<>c__DisplayClass179_0");
        }
        inline app::GameController_c_DisplayClass179_0* create() {
            return il2cpp::create_object<app::GameController_c_DisplayClass179_0>(get_class());
        }
    } // namespace GameController_c_DisplayClass179_0
} // namespace app::classes::types
