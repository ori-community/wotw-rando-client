#pragma once
#include <Modloader/app/structs/SaveGameController.h>
#include <Modloader/app/structs/SaveGameController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveGameController {
        inline app::SaveGameController__Class** type_info() {
            static app::SaveGameController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SaveGameController__Class**)(modloader::win::memory::resolve_rva(0x0472C390));
            }
            return cache;
        }
        inline app::SaveGameController__Class* get_class() {
            return il2cpp::get_class<app::SaveGameController__Class>(type_info(), "", "SaveGameController");
        }
        inline app::SaveGameController* create() {
            return il2cpp::create_object<app::SaveGameController>(get_class());
        }
    } // namespace SaveGameController
} // namespace app::classes::types
