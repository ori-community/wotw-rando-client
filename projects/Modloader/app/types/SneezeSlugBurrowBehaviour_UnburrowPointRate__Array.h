#pragma once
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour_UnburrowPointRate__Array.h>
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour_UnburrowPointRate__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugBurrowBehaviour_UnburrowPointRate__Array {
        inline app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Array__Class** type_info() {
            static app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Array__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Array__Class>(type_info(), "", "SneezeSlugBurrowBehaviour+UnburrowPointRate[]");
        }
        inline app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Array* create() {
            return il2cpp::create_object<app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Array>(get_class());
        }
    } // namespace SneezeSlugBurrowBehaviour_UnburrowPointRate__Array
} // namespace app::classes::types
