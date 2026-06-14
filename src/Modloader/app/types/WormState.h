#pragma once
#include <Modloader/app/structs/WormState.h>
#include <Modloader/app/structs/WormState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WormState {
        inline app::WormState__Class** type_info() {
            static app::WormState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WormState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WormState__Class* get_class() {
            return il2cpp::get_class<app::WormState__Class>(type_info(), "", "WormState");
        }
        inline app::WormState* create() {
            return il2cpp::create_object<app::WormState>(get_class());
        }
    } // namespace WormState
} // namespace app::classes::types
