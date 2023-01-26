#pragma once
#include <Modloader/app/structs/MortarWormIdleState.h>
#include <Modloader/app/structs/MortarWormIdleState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarWormIdleState {
        inline app::MortarWormIdleState__Class** type_info() {
            static app::MortarWormIdleState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MortarWormIdleState__Class**)(modloader::win::memory::resolve_rva(0x047095C0));
            }
            return cache;
        }
        inline app::MortarWormIdleState__Class* get_class() {
            return il2cpp::get_class<app::MortarWormIdleState__Class>(type_info(), "", "MortarWormIdleState");
        }
        inline app::MortarWormIdleState* create() {
            return il2cpp::create_object<app::MortarWormIdleState>(get_class());
        }
    } // namespace MortarWormIdleState
} // namespace app::classes::types
