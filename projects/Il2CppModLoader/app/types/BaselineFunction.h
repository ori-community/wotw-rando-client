#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaselineFunction {
        namespace {
            app::BaselineFunction__Class* type_info_ref = nullptr;
        }
        app::BaselineFunction__Class** type_info = &type_info_ref;
        inline app::BaselineFunction__Class* get_class() {
            return il2cpp::get_class<app::BaselineFunction__Class>(type_info, "UnityEngine.Yoga", "BaselineFunction");
        }
        inline app::BaselineFunction* create() {
            return il2cpp::create_object<app::BaselineFunction>(get_class());
        }
    } // namespace BaselineFunction
} // namespace app::classes::types
