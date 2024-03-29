#pragma once
#include <Modloader/app/structs/RammingBehaviour_ChargeSlamState.h>
#include <Modloader/app/structs/RammingBehaviour_ChargeSlamState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_ChargeSlamState {
        inline app::RammingBehaviour_ChargeSlamState__Class** type_info() {
            static app::RammingBehaviour_ChargeSlamState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RammingBehaviour_ChargeSlamState__Class**)(modloader::win::memory::resolve_rva(0x0474D660));
            }
            return cache;
        }
        inline app::RammingBehaviour_ChargeSlamState__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_ChargeSlamState__Class>(type_info(), "Moon", "RammingBehaviour", "ChargeSlamState");
        }
        inline app::RammingBehaviour_ChargeSlamState* create() {
            return il2cpp::create_object<app::RammingBehaviour_ChargeSlamState>(get_class());
        }
    } // namespace RammingBehaviour_ChargeSlamState
} // namespace app::classes::types
