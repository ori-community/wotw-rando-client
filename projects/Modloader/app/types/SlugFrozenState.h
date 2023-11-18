#pragma once
#include <Modloader/app/structs/SlugFrozenState.h>
#include <Modloader/app/structs/SlugFrozenState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlugFrozenState {
        inline app::SlugFrozenState__Class** type_info() {
            static app::SlugFrozenState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SlugFrozenState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SlugFrozenState__Class* get_class() {
            return il2cpp::get_class<app::SlugFrozenState__Class>(type_info(), "", "SlugFrozenState");
        }
        inline app::SlugFrozenState* create() {
            return il2cpp::create_object<app::SlugFrozenState>(get_class());
        }
    } // namespace SlugFrozenState
} // namespace app::classes::types
