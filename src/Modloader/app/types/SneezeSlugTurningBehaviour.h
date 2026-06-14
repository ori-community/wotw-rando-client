#pragma once
#include <Modloader/app/structs/SneezeSlugTurningBehaviour.h>
#include <Modloader/app/structs/SneezeSlugTurningBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugTurningBehaviour {
        inline app::SneezeSlugTurningBehaviour__Class** type_info() {
            static app::SneezeSlugTurningBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugTurningBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugTurningBehaviour__Class>(type_info(), "Moon", "SneezeSlugTurningBehaviour");
        }
        inline app::SneezeSlugTurningBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugTurningBehaviour>(get_class());
        }
    } // namespace SneezeSlugTurningBehaviour
} // namespace app::classes::types
