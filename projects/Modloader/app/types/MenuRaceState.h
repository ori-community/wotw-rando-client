#pragma once
#include <Modloader/app/structs/MenuRaceState.h>
#include <Modloader/app/structs/MenuRaceState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MenuRaceState {
        inline app::MenuRaceState__Class** type_info() {
            static app::MenuRaceState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MenuRaceState__Class**)(modloader::win::memory::resolve_rva(0x0475F210));
            }
            return cache;
        }
        inline app::MenuRaceState__Class* get_class() {
            return il2cpp::get_class<app::MenuRaceState__Class>(type_info(), "", "MenuRaceState");
        }
        inline app::MenuRaceState* create() {
            return il2cpp::create_object<app::MenuRaceState>(get_class());
        }
    } // namespace MenuRaceState
} // namespace app::classes::types
