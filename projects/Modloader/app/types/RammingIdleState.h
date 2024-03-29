#pragma once
#include <Modloader/app/structs/RammingIdleState.h>
#include <Modloader/app/structs/RammingIdleState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingIdleState {
        inline app::RammingIdleState__Class** type_info() {
            static app::RammingIdleState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RammingIdleState__Class**)(modloader::win::memory::resolve_rva(0x0478E618));
            }
            return cache;
        }
        inline app::RammingIdleState__Class* get_class() {
            return il2cpp::get_class<app::RammingIdleState__Class>(type_info(), "", "RammingIdleState");
        }
        inline app::RammingIdleState* create() {
            return il2cpp::create_object<app::RammingIdleState>(get_class());
        }
    } // namespace RammingIdleState
} // namespace app::classes::types
