#pragma once
#include <Modloader/app/structs/DifficultyController.h>
#include <Modloader/app/structs/DifficultyController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DifficultyController {
        inline app::DifficultyController__Class** type_info() {
            static app::DifficultyController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DifficultyController__Class**)(modloader::win::memory::resolve_rva(0x04723538));
            }
            return cache;
        }
        inline app::DifficultyController__Class* get_class() {
            return il2cpp::get_class<app::DifficultyController__Class>(type_info(), "", "DifficultyController");
        }
        inline app::DifficultyController* create() {
            return il2cpp::create_object<app::DifficultyController>(get_class());
        }
    } // namespace DifficultyController
} // namespace app::classes::types
