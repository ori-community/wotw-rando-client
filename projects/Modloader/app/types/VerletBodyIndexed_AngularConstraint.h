#pragma once
#include <Modloader/app/structs/VerletBodyIndexed_AngularConstraint.h>
#include <Modloader/app/structs/VerletBodyIndexed_AngularConstraint__Array.h>
#include <Modloader/app/structs/VerletBodyIndexed_AngularConstraint__Boxed.h>
#include <Modloader/app/structs/VerletBodyIndexed_AngularConstraint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletBodyIndexed_AngularConstraint {
        inline app::VerletBodyIndexed_AngularConstraint__Class** type_info() {
            static app::VerletBodyIndexed_AngularConstraint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletBodyIndexed_AngularConstraint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletBodyIndexed_AngularConstraint__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletBodyIndexed_AngularConstraint__Class>(type_info(), "Moon", "VerletBodyIndexed", "AngularConstraint");
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
        inline app::VerletBodyIndexed_AngularConstraint__Array* create_array(const std::vector<app::VerletBodyIndexed_AngularConstraint>& items) {
            return il2cpp::array_new<app::VerletBodyIndexed_AngularConstraint__Array>(get_class(), items);
        }
    } // namespace VerletBodyIndexed_AngularConstraint
} // namespace app::classes::types
