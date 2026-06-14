#pragma once
#include <Modloader/app/structs/SlugFallingState.h>
#include <Modloader/app/structs/SlugFallingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlugFallingState {
        inline app::SlugFallingState__Class** type_info() {
            static app::SlugFallingState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SlugFallingState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SlugFallingState__Class* get_class() {
            return il2cpp::get_class<app::SlugFallingState__Class>(type_info(), "", "SlugFallingState");
        }
        inline app::SlugFallingState* create() {
            return il2cpp::create_object<app::SlugFallingState>(get_class());
        }
    } // namespace SlugFallingState
} // namespace app::classes::types
