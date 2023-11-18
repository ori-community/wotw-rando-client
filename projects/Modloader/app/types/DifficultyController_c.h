#pragma once
#include <Modloader/app/structs/DifficultyController_c.h>
#include <Modloader/app/structs/DifficultyController_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DifficultyController_c {
        inline app::DifficultyController_c__Class** type_info() {
            static app::DifficultyController_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DifficultyController_c__Class**)(modloader::win::memory::resolve_rva(0x0472B960));
            }
            return cache;
        }
        inline app::DifficultyController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DifficultyController_c__Class>(type_info(), "", "DifficultyController", "<>c");
        }
        inline app::DifficultyController_c* create() {
            return il2cpp::create_object<app::DifficultyController_c>(get_class());
        }
    } // namespace DifficultyController_c
} // namespace app::classes::types
