#pragma once
#include <Modloader/app/structs/StarSlugState.h>
#include <Modloader/app/structs/StarSlugState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StarSlugState {
        inline app::StarSlugState__Class** type_info() {
            static app::StarSlugState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StarSlugState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StarSlugState__Class* get_class() {
            return il2cpp::get_class<app::StarSlugState__Class>(type_info(), "", "StarSlugState");
        }
        inline app::StarSlugState* create() {
            return il2cpp::create_object<app::StarSlugState>(get_class());
        }
    } // namespace StarSlugState
} // namespace app::classes::types
