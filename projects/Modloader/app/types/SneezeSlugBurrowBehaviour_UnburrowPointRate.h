#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour_UnburrowPointRate__Class.h>
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour_UnburrowPointRate.h>
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour_UnburrowPointRate__Boxed.h>
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour_UnburrowPointRate__Array.h>

namespace app::classes::types {
    namespace SneezeSlugBurrowBehaviour_UnburrowPointRate {
        inline app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Class** type_info = (app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Class**)(modloader::win::memory::resolve_rva(0x04784538));
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
        inline app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Array* create_array(const std::vector<app::SneezeSlugBurrowBehaviour_UnburrowPointRate>& items) {
            return il2cpp::array_new<app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Array>(get_class(), items);
        }
    } // namespace SneezeSlugBurrowBehaviour_UnburrowPointRate
} // namespace app::classes::types
