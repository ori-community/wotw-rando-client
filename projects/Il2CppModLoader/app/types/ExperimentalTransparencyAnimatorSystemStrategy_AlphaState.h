#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy_AlphaState {
        namespace {
            app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Class* type_info_ref = nullptr;
        }
        app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Class** type_info = &type_info_ref;
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Class* get_class() {
            return il2cpp::get_nested_class<app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Class>(type_info, "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy", "AlphaState");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState>(get_class());
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Boxed* box(app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState value) {
            return il2cpp::box_value<app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Boxed>(get_class(), value);
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array* create_array(int size) {
            return il2cpp::array_new<app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array>(get_class(), size);
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy_AlphaState
} // namespace app::classes::types
