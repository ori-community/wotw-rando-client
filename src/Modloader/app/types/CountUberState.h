#pragma once
#include <Modloader/app/structs/CountUberState.h>
#include <Modloader/app/structs/CountUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CountUberState {
        inline app::CountUberState__Class** type_info() {
            static app::CountUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CountUberState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CountUberState__Class* get_class() {
            return il2cpp::get_class<app::CountUberState__Class>(type_info(), "Moon", "CountUberState");
        }
        inline app::CountUberState* create() {
            return il2cpp::create_object<app::CountUberState>(get_class());
        }
    } // namespace CountUberState
} // namespace app::classes::types
