#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugBurrowBehaviour_UnburrowPointRate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Class** type_info;
        inline app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Class* get_class() {
            return il2cpp::get_nested_class<app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Class>(type_info, "", "SneezeSlugBurrowBehaviour", "UnburrowPointRate");
        }
        inline app::SneezeSlugBurrowBehaviour_UnburrowPointRate* create() {
            return il2cpp::create_object<app::SneezeSlugBurrowBehaviour_UnburrowPointRate>(get_class());
        }
        inline app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Boxed* box(app::SneezeSlugBurrowBehaviour_UnburrowPointRate value) {
            return il2cpp::box_value<app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Boxed>(get_class(), value);
        }
        inline app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Array* create_array(int size) {
            return il2cpp::array_new<app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Array>(get_class(), size);
        }
        inline app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Array* create_array(const std::vector<app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Boxed>& items) {
            return il2cpp::array_new<app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Array>(get_class(), items);
        }
    } // namespace SneezeSlugBurrowBehaviour_UnburrowPointRate
} // namespace app::classes::types
