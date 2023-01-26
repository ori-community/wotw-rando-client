#pragma once
#include <Modloader/app/structs/RammingThrownState.h>
#include <Modloader/app/structs/RammingThrownState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingThrownState {
        inline app::RammingThrownState__Class** type_info() {
            static app::RammingThrownState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RammingThrownState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RammingThrownState__Class* get_class() {
            return il2cpp::get_class<app::RammingThrownState__Class>(type_info(), "", "RammingThrownState");
        }
        inline app::RammingThrownState* create() {
            return il2cpp::create_object<app::RammingThrownState>(get_class());
        }
    } // namespace RammingThrownState
} // namespace app::classes::types
