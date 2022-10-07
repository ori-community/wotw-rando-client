#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ElectricFieldSlugBehaviour_SwellTarget {
        namespace {
            app::ElectricFieldSlugBehaviour_SwellTarget__Class* type_info_ref = nullptr;
        }
        app::ElectricFieldSlugBehaviour_SwellTarget__Class** type_info = &type_info_ref;
        inline app::ElectricFieldSlugBehaviour_SwellTarget__Class* get_class() {
            return il2cpp::get_nested_class<app::ElectricFieldSlugBehaviour_SwellTarget__Class>(type_info, "", "ElectricFieldSlugBehaviour", "SwellTarget");
        }
        inline app::ElectricFieldSlugBehaviour_SwellTarget* create() {
            return il2cpp::create_object<app::ElectricFieldSlugBehaviour_SwellTarget>(get_class());
        }
        inline app::ElectricFieldSlugBehaviour_SwellTarget__Boxed* box(app::ElectricFieldSlugBehaviour_SwellTarget value) {
            return il2cpp::box_value<app::ElectricFieldSlugBehaviour_SwellTarget__Boxed>(get_class(), value);
        }
        inline app::ElectricFieldSlugBehaviour_SwellTarget__Array* create_array(int size) {
            return il2cpp::array_new<app::ElectricFieldSlugBehaviour_SwellTarget__Array>(get_class(), size);
        }
        inline app::ElectricFieldSlugBehaviour_SwellTarget__Array* create_array(const std::vector<app::ElectricFieldSlugBehaviour_SwellTarget>& items) {
            return il2cpp::array_new<app::ElectricFieldSlugBehaviour_SwellTarget__Array>(get_class(), items);
        }
    } // namespace ElectricFieldSlugBehaviour_SwellTarget
} // namespace app::classes::types
