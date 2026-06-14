#pragma once
#include <Modloader/app/structs/GameController.h>
#include <Modloader/app/structs/GameController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameController {
        inline app::GameController__Class** type_info() {
            static app::GameController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameController__Class**)(modloader::win::memory::resolve_rva(0x047015F8));
            }
            return cache;
        }
        inline app::GameController__Class* get_class() {
            return il2cpp::get_class<app::GameController__Class>(type_info(), "", "GameController");
        }
        inline app::GameController* create() {
            return il2cpp::create_object<app::GameController>(get_class());
        }
    } // namespace GameController
} // namespace app::classes::types
