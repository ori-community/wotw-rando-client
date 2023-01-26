#pragma once
#include <Modloader/app/structs/MeasureFunction.h>
#include <Modloader/app/structs/MeasureFunction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeasureFunction {
        inline app::MeasureFunction__Class** type_info() {
            static app::MeasureFunction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeasureFunction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeasureFunction__Class* get_class() {
            return il2cpp::get_class<app::MeasureFunction__Class>(type_info(), "UnityEngine.Yoga", "MeasureFunction");
        }
        inline app::MeasureFunction* create() {
            return il2cpp::create_object<app::MeasureFunction>(get_class());
        }
    } // namespace MeasureFunction
} // namespace app::classes::types
