#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugTurningBehaviour {
        namespace {
            app::SneezeSlugTurningBehaviour__Class* type_info_ref = nullptr;
        }
        app::SneezeSlugTurningBehaviour__Class** type_info = &type_info_ref;
        inline app::SneezeSlugTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugTurningBehaviour__Class>(type_info, "Moon", "SneezeSlugTurningBehaviour");
        }
        inline app::SneezeSlugTurningBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugTurningBehaviour>(get_class());
        }
    } // namespace SneezeSlugTurningBehaviour
} // namespace app::classes::types
