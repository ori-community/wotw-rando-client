#pragma once
#include <Modloader/app/structs/WormHidingState.h>
#include <Modloader/app/structs/WormHidingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WormHidingState {
        inline app::WormHidingState__Class** type_info() {
            static app::WormHidingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WormHidingState__Class**)(modloader::win::memory::resolve_rva(0x04753728));
            }
            return cache;
        }
        inline app::WormHidingState__Class* get_class() {
            return il2cpp::get_class<app::WormHidingState__Class>(type_info(), "", "WormHidingState");
        }
        inline app::WormHidingState* create() {
            return il2cpp::create_object<app::WormHidingState>(get_class());
        }
    } // namespace WormHidingState
} // namespace app::classes::types
