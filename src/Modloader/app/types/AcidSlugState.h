#pragma once
#include <Modloader/app/structs/AcidSlugState.h>
#include <Modloader/app/structs/AcidSlugState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcidSlugState {
        inline app::AcidSlugState__Class** type_info() {
            static app::AcidSlugState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AcidSlugState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AcidSlugState__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugState__Class>(type_info(), "", "AcidSlugState");
        }
        inline app::AcidSlugState* create() {
            return il2cpp::create_object<app::AcidSlugState>(get_class());
        }
    } // namespace AcidSlugState
} // namespace app::classes::types
