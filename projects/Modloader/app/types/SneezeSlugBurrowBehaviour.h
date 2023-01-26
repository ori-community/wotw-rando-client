#pragma once
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour.h>
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugBurrowBehaviour {
        inline app::SneezeSlugBurrowBehaviour__Class** type_info() {
            static app::SneezeSlugBurrowBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugBurrowBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugBurrowBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugBurrowBehaviour__Class>(type_info(), "", "SneezeSlugBurrowBehaviour");
        }
        inline app::SneezeSlugBurrowBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugBurrowBehaviour>(get_class());
        }
    } // namespace SneezeSlugBurrowBehaviour
} // namespace app::classes::types
