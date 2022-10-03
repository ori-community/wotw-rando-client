#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue {
        namespace {
            app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Class* type_info_ref = nullptr;
        }
        app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Class** type_info = &type_info_ref;
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Class* get_class() {
            return il2cpp::get_nested_class<app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Class>(type_info, "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy", "ComputedValue");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue>(get_class());
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Boxed* box(app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue value) {
            return il2cpp::box_value<app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Boxed>(get_class(), value);
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array* create_array(int size) {
            return il2cpp::array_new<app::ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array>(get_class(), size);
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue
} // namespace app::classes::types
