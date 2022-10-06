#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletBodyIndexed_AngularConstraint {
        namespace {
            app::VerletBodyIndexed_AngularConstraint__Class* type_info_ref = nullptr;
        }
        app::VerletBodyIndexed_AngularConstraint__Class** type_info = &type_info_ref;
        inline app::VerletBodyIndexed_AngularConstraint__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletBodyIndexed_AngularConstraint__Class>(type_info, "Moon", "VerletBodyIndexed", "AngularConstraint");
        }
        inline app::VerletBodyIndexed_AngularConstraint* create() {
            return il2cpp::create_object<app::VerletBodyIndexed_AngularConstraint>(get_class());
        }
        inline app::VerletBodyIndexed_AngularConstraint__Boxed* box(app::VerletBodyIndexed_AngularConstraint value) {
            return il2cpp::box_value<app::VerletBodyIndexed_AngularConstraint__Boxed>(get_class(), value);
        }
        inline app::VerletBodyIndexed_AngularConstraint__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletBodyIndexed_AngularConstraint__Array>(get_class(), size);
        }
        inline app::VerletBodyIndexed_AngularConstraint__Array* create_array(const std::vector<app::VerletBodyIndexed_AngularConstraint__Boxed>& items) {
            return il2cpp::array_new<app::VerletBodyIndexed_AngularConstraint__Array>(get_class(), items);
        }
    } // namespace VerletBodyIndexed_AngularConstraint
} // namespace app::classes::types
