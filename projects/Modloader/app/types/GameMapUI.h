#pragma once
#include <Modloader/app/structs/GameMapUI.h>
#include <Modloader/app/structs/GameMapUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameMapUI {
        inline app::GameMapUI__Class** type_info() {
            static app::GameMapUI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameMapUI__Class**)(modloader::win::memory::resolve_rva(0x0477F820));
            }
            return cache;
        }
        inline app::GameMapUI__Class* get_class() {
            return il2cpp::get_class<app::GameMapUI__Class>(type_info(), "", "GameMapUI");
        }
        inline app::GameMapUI* create() {
            return il2cpp::create_object<app::GameMapUI>(get_class());
        }
    } // namespace GameMapUI
} // namespace app::classes::types
