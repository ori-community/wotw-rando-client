#pragma once
#include <Modloader/app/structs/RammingBehaviour_RamState.h>
#include <Modloader/app/structs/RammingBehaviour_RamState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_RamState {
        inline app::RammingBehaviour_RamState__Class** type_info() {
            static app::RammingBehaviour_RamState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RammingBehaviour_RamState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RammingBehaviour_RamState__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_RamState__Class>(type_info(), "Moon", "RammingBehaviour", "RamState");
        }
        inline app::RammingBehaviour_RamState* create() {
            return il2cpp::create_object<app::RammingBehaviour_RamState>(get_class());
        }
    } // namespace RammingBehaviour_RamState
} // namespace app::classes::types
