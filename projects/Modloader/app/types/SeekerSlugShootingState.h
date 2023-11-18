#pragma once
#include <Modloader/app/structs/SeekerSlugShootingState.h>
#include <Modloader/app/structs/SeekerSlugShootingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeekerSlugShootingState {
        inline app::SeekerSlugShootingState__Class** type_info() {
            static app::SeekerSlugShootingState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeekerSlugShootingState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeekerSlugShootingState__Class* get_class() {
            return il2cpp::get_class<app::SeekerSlugShootingState__Class>(type_info(), "", "SeekerSlugShootingState");
        }
        inline app::SeekerSlugShootingState* create() {
            return il2cpp::create_object<app::SeekerSlugShootingState>(get_class());
        }
    } // namespace SeekerSlugShootingState
} // namespace app::classes::types
