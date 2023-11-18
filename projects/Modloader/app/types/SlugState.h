#pragma once
#include <Modloader/app/structs/SlugState.h>
#include <Modloader/app/structs/SlugState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlugState {
        inline app::SlugState__Class** type_info() {
            static app::SlugState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SlugState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SlugState__Class* get_class() {
            return il2cpp::get_class<app::SlugState__Class>(type_info(), "", "SlugState");
        }
        inline app::SlugState* create() {
            return il2cpp::create_object<app::SlugState>(get_class());
        }
    } // namespace SlugState
} // namespace app::classes::types
