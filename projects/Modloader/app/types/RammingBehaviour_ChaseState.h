#pragma once
#include <Modloader/app/structs/RammingBehaviour_ChaseState.h>
#include <Modloader/app/structs/RammingBehaviour_ChaseState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_ChaseState {
        inline app::RammingBehaviour_ChaseState__Class** type_info() {
            static app::RammingBehaviour_ChaseState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RammingBehaviour_ChaseState__Class**)(modloader::win::memory::resolve_rva(0x0473A7C0));
            }
            return cache;
        }
        inline app::RammingBehaviour_ChaseState__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_ChaseState__Class>(type_info(), "Moon", "RammingBehaviour", "ChaseState");
        }
        inline app::RammingBehaviour_ChaseState* create() {
            return il2cpp::create_object<app::RammingBehaviour_ChaseState>(get_class());
        }
    } // namespace RammingBehaviour_ChaseState
} // namespace app::classes::types
