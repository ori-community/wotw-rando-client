#pragma once
#include <Modloader/app/structs/RammingBehaviour_TurnChargeSlamState.h>
#include <Modloader/app/structs/RammingBehaviour_TurnChargeSlamState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_TurnChargeSlamState {
        inline app::RammingBehaviour_TurnChargeSlamState__Class** type_info() {
            static app::RammingBehaviour_TurnChargeSlamState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RammingBehaviour_TurnChargeSlamState__Class**)(modloader::win::memory::resolve_rva(0x0473A910));
            }
            return cache;
        }
        inline app::RammingBehaviour_TurnChargeSlamState__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_TurnChargeSlamState__Class>(type_info(), "Moon", "RammingBehaviour", "TurnChargeSlamState");
        }
        inline app::RammingBehaviour_TurnChargeSlamState* create() {
            return il2cpp::create_object<app::RammingBehaviour_TurnChargeSlamState>(get_class());
        }
    } // namespace RammingBehaviour_TurnChargeSlamState
} // namespace app::classes::types
