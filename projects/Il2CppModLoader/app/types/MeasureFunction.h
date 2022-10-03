#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeasureFunction {
        namespace {
            app::MeasureFunction__Class* type_info_ref = nullptr;
        }
        app::MeasureFunction__Class** type_info = &type_info_ref;
        inline app::MeasureFunction__Class* get_class() {
            return il2cpp::get_class<app::MeasureFunction__Class>(type_info, "UnityEngine.Yoga", "MeasureFunction");
        }
        inline app::MeasureFunction* create() {
            return il2cpp::create_object<app::MeasureFunction>(get_class());
        }
    } // namespace MeasureFunction
} // namespace app::classes::types
