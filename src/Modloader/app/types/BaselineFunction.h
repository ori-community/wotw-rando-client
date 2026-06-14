#pragma once
#include <Modloader/app/structs/BaselineFunction.h>
#include <Modloader/app/structs/BaselineFunction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaselineFunction {
        inline app::BaselineFunction__Class** type_info() {
            static app::BaselineFunction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaselineFunction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaselineFunction__Class* get_class() {
            return il2cpp::get_class<app::BaselineFunction__Class>(type_info(), "UnityEngine.Yoga", "BaselineFunction");
        }
        inline app::BaselineFunction* create() {
            return il2cpp::create_object<app::BaselineFunction>(get_class());
        }
    } // namespace BaselineFunction
} // namespace app::classes::types
