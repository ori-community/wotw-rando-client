#pragma once
#include <Modloader/app/structs/DropSlugState.h>
#include <Modloader/app/structs/DropSlugState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugState {
        inline app::DropSlugState__Class** type_info() {
            static app::DropSlugState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSlugState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSlugState__Class* get_class() {
            return il2cpp::get_class<app::DropSlugState__Class>(type_info(), "", "DropSlugState");
        }
        inline app::DropSlugState* create() {
            return il2cpp::create_object<app::DropSlugState>(get_class());
        }
    } // namespace DropSlugState
} // namespace app::classes::types
