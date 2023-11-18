#pragma once
#include <Modloader/app/structs/RammingBrakingState.h>
#include <Modloader/app/structs/RammingBrakingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingBrakingState {
        inline app::RammingBrakingState__Class** type_info() {
            static app::RammingBrakingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RammingBrakingState__Class**)(modloader::win::memory::resolve_rva(0x0473A580));
            }
            return cache;
        }
        inline app::RammingBrakingState__Class* get_class() {
            return il2cpp::get_class<app::RammingBrakingState__Class>(type_info(), "", "RammingBrakingState");
        }
        inline app::RammingBrakingState* create() {
            return il2cpp::create_object<app::RammingBrakingState>(get_class());
        }
    } // namespace RammingBrakingState
} // namespace app::classes::types
