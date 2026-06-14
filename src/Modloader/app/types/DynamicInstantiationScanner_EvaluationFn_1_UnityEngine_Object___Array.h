#pragma once
#include <Modloader/app/structs/DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Array.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Array {
        inline app::DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Array__Class** type_info() {
            static app::DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Array__Class>(type_info(), "", "DynamicInstantiationScanner+EvaluationFn`1[UnityEngine.Object][]");
        }
        inline app::DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Array* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Array>(get_class());
        }
    } // namespace DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Array
} // namespace app::classes::types
