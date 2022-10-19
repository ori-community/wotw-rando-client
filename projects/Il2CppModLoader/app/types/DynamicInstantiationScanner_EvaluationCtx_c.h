#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_EvaluationCtx_c {
        inline app::DynamicInstantiationScanner_EvaluationCtx_c__Class** type_info = (app::DynamicInstantiationScanner_EvaluationCtx_c__Class**)(modloader::win::memory::resolve_rva(0x047685B0));
        inline app::DynamicInstantiationScanner_EvaluationCtx_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_EvaluationCtx_c__Class>(type_info, "", "DynamicInstantiationScanner+EvaluationCtx", "<>c");
        }
        inline app::DynamicInstantiationScanner_EvaluationCtx_c* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_EvaluationCtx_c>(get_class());
        }
    } // namespace DynamicInstantiationScanner_EvaluationCtx_c
} // namespace app::classes::types
