#pragma once
#include <Modloader/app/structs/WormMortarShootingState.h>
#include <Modloader/app/structs/WormMortarShootingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WormMortarShootingState {
        inline app::WormMortarShootingState__Class** type_info() {
            static app::WormMortarShootingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WormMortarShootingState__Class**)(modloader::win::memory::resolve_rva(0x0476FE40));
            }
            return cache;
        }
        inline app::WormMortarShootingState__Class* get_class() {
            return il2cpp::get_class<app::WormMortarShootingState__Class>(type_info(), "", "WormMortarShootingState");
        }
        inline app::WormMortarShootingState* create() {
            return il2cpp::create_object<app::WormMortarShootingState>(get_class());
        }
    } // namespace WormMortarShootingState
} // namespace app::classes::types
