#pragma once
#include <Modloader/app/structs/RammingStunnedState.h>
#include <Modloader/app/structs/RammingStunnedState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingStunnedState {
        inline app::RammingStunnedState__Class** type_info() {
            static app::RammingStunnedState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RammingStunnedState__Class**)(modloader::win::memory::resolve_rva(0x0474FCA8));
            }
            return cache;
        }
        inline app::RammingStunnedState__Class* get_class() {
            return il2cpp::get_class<app::RammingStunnedState__Class>(type_info(), "", "RammingStunnedState");
        }
        inline app::RammingStunnedState* create() {
            return il2cpp::create_object<app::RammingStunnedState>(get_class());
        }
    } // namespace RammingStunnedState
} // namespace app::classes::types
