#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_EvaluationCtx {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicInstantiationScanner_EvaluationCtx__Class** type_info;
        inline app::DynamicInstantiationScanner_EvaluationCtx__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_EvaluationCtx__Class>(type_info, "", "DynamicInstantiationScanner", "EvaluationCtx");
        }
        inline app::DynamicInstantiationScanner_EvaluationCtx* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_EvaluationCtx>(get_class());
        }
    } // namespace DynamicInstantiationScanner_EvaluationCtx
} // namespace app::classes::types
