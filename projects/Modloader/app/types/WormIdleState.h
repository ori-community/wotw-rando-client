#pragma once
#include <Modloader/app/structs/WormIdleState.h>
#include <Modloader/app/structs/WormIdleState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WormIdleState {
        inline app::WormIdleState__Class** type_info() {
            static app::WormIdleState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WormIdleState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WormIdleState__Class* get_class() {
            return il2cpp::get_class<app::WormIdleState__Class>(type_info(), "", "WormIdleState");
        }
        inline app::WormIdleState* create() {
            return il2cpp::create_object<app::WormIdleState>(get_class());
        }
    } // namespace WormIdleState
} // namespace app::classes::types
