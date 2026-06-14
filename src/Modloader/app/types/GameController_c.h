#pragma once
#include <Modloader/app/structs/GameController_c.h>
#include <Modloader/app/structs/GameController_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameController_c {
        inline app::GameController_c__Class** type_info() {
            static app::GameController_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameController_c__Class**)(modloader::win::memory::resolve_rva(0x0475F790));
            }
            return cache;
        }
        inline app::GameController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_c__Class>(type_info(), "", "GameController", "<>c");
        }
        inline app::GameController_c* create() {
            return il2cpp::create_object<app::GameController_c>(get_class());
        }
    } // namespace GameController_c
} // namespace app::classes::types
